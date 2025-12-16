CFLAGS = -Wall -Wextra -Werror

SRC_DIR=./

INCLUDES=headers

SRC_FILES = $(SRC_DIR)/parse.c \

SRCS_OBJ = $(SRC_FILES:.c=.o)

ALL_OBJ = $(SRCS_OBJ) $(BONUS_OBJ)

DFILES = $(ALL_OBJ:.o=.d)

NAME = parse.a

all: $(NAME)

$(NAME) : $(SRCS_OBJ)
	ar rcs $(NAME) $(SRCS_OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) -MMD -MP $< -o $@ -I$(INCLUDES)

clean:
	rm -rf $(ALL_OBJ) $(DFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

-include : $(DFILES)
