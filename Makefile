CC = cc
CFLAGS = -Wall -Werror -Wextra



SRCS = ft_atoi.c\
      ft_bzero.c\
      ft_calloc.c\
      ft_isalnum.c\
      ft_isalpha.c\
      ft_isascii.c\
      ft_isdigit.c\
      ft_isprint.c\
      ft_memchr.c\
      ft_memcmp.c\
      ft_memcpy.c\
      ft_memmove.c\
      ft_memset.c\
      ft_strchr.c\
      ft_strdup.c\
      ft_strlcpy.c\
      ft_strlen.c\
      ft_strncmp.c\
      ft_strrchr.c\
      ft_tolower.c\
      ft_toupper.c\
      ft_split.c\
      ft_itoa.c\
      ft_strtrim.c\
      ft_substr.c\
      ft_strjoin.c\
      ft_strmapi.c\
      ft_striteri.c\
      ft_putchar_fd.c\
      ft_putstr_fd.c\
      ft_putendl_fd.c\
      ft_putnbr_fd.c\

OBJS_DIR = objs/

OBJS = $(patsubst %.c, %.o, $(SRCS))

NAME = libft.a

all : $(NAME)

$(OBJS_DIR)%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar -rcs libft.a $<

clean :
	rm -f $(OBJS_DIR)%.o

fclean : clean
	rm -f libft.a

re : fclean all

.PHONY : all clean re fclean
