/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 06:08:59 by icchon            #+#    #+#             */
/*   Updated: 2025/01/01 19:36:45 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static char	*safely_substr(char *s, unsigned int start, size_t len, int to_free)
{
	char	*res;
	int		length;
	int		i;

	length = ft_min(2, len, ft_max(2, 0, ft_strlen(s) - start));
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	if (to_free)
		free(s);
	return (res);
}

static char	*ft_safely_strjoin(char *s1, char *s2, int to_free_s1,
		int to_free_s2)
{
	char	*res;
	size_t	length;
	size_t	i;

	length = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		res[i] = s1[i];
		i++;
	}
	while (i < length)
	{
		res[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	res[i] = '\0';
	if (to_free_s1)
		free(s1);
	if (to_free_s2)
		free(s2);
	return (res);
}

static char	*ft_concat(char *line, char *src, char **rest, int to_free_rest)
{
	int		i;
	char	*concat_part;

	i = 0;
	while (src[i])
	{
		if (src[i++] == '\n')
		{
			concat_part = safely_substr(src, 0, (i), 0);
			concat_part[i - 1] = '\0';
			*rest = safely_substr(src, (i), BUFFER_SIZE, to_free_rest);
			return (ft_safely_strjoin(line, concat_part, 1, 1));
		}
	}
	return (NULL);
}

static char	*ft_init(char *buff, char *line, char **rest)
{
	if (*rest == NULL)
	{
		*rest = ft_strdup("");
		if (*rest == NULL)
			return (NULL);
	}
	ft_memset(buff, 0, BUFFER_SIZE + 1);
	line = ft_strdup("");
	if (line == NULL)
		return (NULL);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*line;
	static char	*rest = NULL;
	char		buff[BUFFER_SIZE + 1];
	char		*tmp;

	line = ft_init(buff, line, &rest);
	if (line == NULL)
		return (NULL);
	tmp = ft_concat(line, rest, &rest, 1);
	if (tmp != NULL)
		return (tmp);
	line = ft_safely_strjoin(line, rest, 1, 1);
	rest = NULL;
	if (read(fd, buff, BUFFER_SIZE) <= 0 && !line[0])
		return (free(line), NULL);
	tmp = ft_concat(line, buff, &rest, 0);
	while (tmp == NULL)
	{
		line = ft_safely_strjoin(line, buff, 1, 0);
		ft_memset(buff, 0, BUFFER_SIZE + 1);
		if (read(fd, buff, BUFFER_SIZE) <= 0)
			return (line);
		tmp = ft_concat(line, buff, &rest, 0);
	}
	return (tmp);
}
