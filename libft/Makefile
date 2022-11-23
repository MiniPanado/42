NAME = libft.a
AR = ar -crs
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRC = atoi bzero calloc isalnum isalpha isascii isdigit isprint itoa lstadd_back lstadd_front \
lstclear lstdelone lstiter lstlast lstmap lstnew lstsize memchr memcmp memcpy memmove memset putchar_fd \
putendl_fd putnbr_fd putstr_fd split strchr strdup striteri strjoin strlcat strlcpy strlen strmapi \
strncmp strnstr strrchr strtrim substr tolower toupper
SRCS = $(addprefix ft_, $(SRC))
OBJ = $(SRCS:=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: all

.PHONY: all clean fclean re bonus
