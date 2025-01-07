NAME   = libft.a
CC     = cc
CFLAGS = -Wall -Wextra -Werror 
INC = includes

#io--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

##printf
PRINTF_SPEC_FILES := ft_create_c.c ft_create_d.c ft_create_i.c ft_create_p.c ft_create_s.c ft_create_u.c ft_create_sx.c ft_create_lx.c ft_create_nothing.c ft_create_percent.c 
PRINTF_UTIL_FILES := block_util.c init_util.c options_util.c processing_util1.c processing_util2.c 
PRINTF_SRCS := $(addprefix src/spec_funcs/,$(PRINTF_SPEC_FILES)) $(addprefix src/utils/,$(PRINTF_UTIL_FILES)) src/ft_printf.c
##

IO_FILES := ft_print_strs.c get_next_line.c ft_print_arr.c 
IO_SRCS := $(IO_FILES) $(addprefix printf/,$(PRINTF_SRCS))
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#is--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
IS_FILES := ft_isequal.c ft_isinrange.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_ischain.c ft_isdigit.c ft_ismatch.c ft_isprint.c ft_isspace.c ft_issign.c ft_isint.c 
IS_SRCS := $(IS_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#lst--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
LST_FILES := ft_twlstget.c ft_lstadd_back.c ft_lstdelone.c ft_lstmap.c ft_twlstadd_back.c ft_twlstdelone.c ft_twlstnew.c ft_lstadd_front.c ft_lstiter.c ft_lstnew.c ft_twlstadd_front.c ft_twlsthead.c ft_twlstsize.c ft_lstclear.c ft_lstlast.c ft_lstsize.c ft_twlstclear.c ft_twlstlast.c ft_issortedtwlst.c
LST_SRCS := $(LST_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#mem--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
MEM_FILES := ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
MEM_SRCS := $(MEM_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#num--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
NUM_FILES := ft_generate_seed.c ft_rand_u32.c ft_itoa.c ft_itoshex.c ft_precisely_itolhex.c ft_precisely_utoa.c ft_get_digit_cnt.c ft_itolhex.c ft_precisely_itoa.c ft_precisely_itoshex.c ft_utoa.c
NUM_SRCS := $(NUM_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#str--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
STR_FILES := ft_strjoin_safe.c ft_atoi_base.c ft_strslen.c ft_atoi.c ft_calc_next_chr.c ft_chrset.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_calc_next_str.c ft_contain.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c ft_chr_to_str.c ft_create_chain.c ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_atol.c
STR_SRCS := $(STR_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#util--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
UTIL_FILES := ft_abs.c ft_free_strs.c ft_all.c ft_any.c ft_max.c ft_min.c ft_swap.c ft_exfree.c ft_setval.c
UTIL_SRCS := $(UTIL_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#algo--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ALGO_FILES := ft_compress.c ft_sort.c ft_quadratic_transform.c 
ALGO_SRCS := $(ALGO_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#arr--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ARR_FILES := ft_dup_arr.c  ft_indexof.c  ft_unique_arr.c
ARR_SRCS := $(ARR_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#vec-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
VEC_FILES := ft_crossvec3.c ft_addvec2.c ft_mulvec2.c ft_newvec2.c ft_normalizevec2.c ft_scalarvec2.c ft_subvec2.c ft_addvec3.c ft_mulvec3.c ft_newvec3.c ft_normalizevec3.c ft_scalarvec3.c ft_subvec3.c ft_norm_vec2.c ft_norm_vec3.c
VEC_SRCS := $(VEC_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#quat-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
QUAT_FILES := ft_rotatevec3.c ft_addquat.c ft_mulquat.c ft_quattovec3.c ft_vec3toquat.c ft_conjugate_quat.c ft_newquat.c ft_rotationquat.c ft_invquat.c ft_normalizequat.c ft_scalequat.c
QUAT_SRCS := $(QUAT_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#sys-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
SYS_FILES := ft_create_file.c ft_get_env.c ft_join_path.c ft_create_random_file.c ft_get_expanded_env.c ft_path_exist.c ft_get_absolute_path.c ft_get_expanded_path.c
SYS_SRCS := $(SYS_FILES)
#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


SRCS := $(addprefix io/,$(IO_SRCS)) $(addprefix is/,$(IS_SRCS)) $(addprefix lst/,$(LST_SRCS)) $(addprefix mem/,$(MEM_SRCS)) $(addprefix num/,$(NUM_SRCS)) $(addprefix str/,$(STR_SRCS)) $(addprefix util/,$(UTIL_SRCS)) $(addprefix algo/,$(ALGO_SRCS)) $(addprefix arr/,$(ARR_SRCS)) $(addprefix vec/,$(VEC_SRCS)) $(addprefix quat/,$(QUAT_SRCS)) $(addprefix sys/,$(SYS_SRCS)) 
OBJS := $(SRCS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)
.c.o: 
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re 