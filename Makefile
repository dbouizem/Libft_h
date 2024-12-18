NAME = libft.a
SRCS =	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_calloc.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_memcmp.c \
	ft_atoi.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re all
