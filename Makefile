NAME = numbers
SRC = $(shell find . -name "*.c")
INC		= header.h

CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror

OBJ	= $(SRC:.c=.o)

%.o:%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME).a $(OBJ)

clean:
	$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
	$(RM) $(NAME).a

re: fclean all

bonus:			$(OBJ)	$(B_OBJ)
					ar -rcs $(NAME).a $(OBJ) $(B_OBJ)


.PHONY:			all, clean, fclean, re