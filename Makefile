NAME   = libft.a
CC     = cc
CFLAGS = -Wall -Wextra -Werror 
SRCS = ft_strlen.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		 ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 
ORIGINAL_SRCS = ft_get_digit_cnt.c ft_putlhex.c ft_putnbr.c ft_putshex.c ft_putstr.c ft_putchar.c ft_contain.c ft_calc_next_chr.c ft_itolhex.c ft_itoshex.c ft_utoa.c \
	ft_max.c ft_min.c ft_chr_to_str.c ft_calc_next_str.c ft_ismatch.c ft_create_chain.c ft_precisely_itoa.c ft_precisely_utoa.c ft_precisely_itolhex.c \
	ft_precisely_itoshex.c ft_ischain.c ft_chrset.c ft_all.c ft_any.c 

OBJS = $(SRCS:.c=.o)
ORIGINAL_OBJS = $(ORIGINAL_SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

ifdef WITH_BONUS
OBJS += $(BONUS_OBJS)
endif

all: $(NAME) 

$(NAME): $(OBJS) $(ORIGINAL_OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(ORIGINAL_OBJS)  $(BONUS_OBJS)

.c.o: 
	$(CC) $(CFLAGS) -c $< -o $@

bonus:
	@make WITH_BONUS=1 all

clean: 
	rm -f $(OBJS) $(BONUS_OBJS) $(ORIGINAL_OBJS) libft.so a.out 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus 