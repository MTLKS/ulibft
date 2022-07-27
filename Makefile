NAME	= libft.a
CC		= gcc
AR		= ar
CFLAGS	= -Wall -Werror -Wextra
ARFLAGS	= rcs
RM		= rm -rf

INCLUDES	= ./includes
SRC_PATH	= ./src
OBJ_PATH	= ./obj

SRCS	= $(foreach x, $(SRC_PATH), $(wildcard $(addprefix $(x)/*/*,.c*)))
OBJS	= $(addprefix $(OBJ_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRCS)))))

all:		$(NAME)

$(NAME):	$(OBJ_PATH) $(OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJ_PATH)/%.o:	$(SRC_PATH)/*/%.c*
					$(CC) $(CFLAGS) -c -I$(INCLUDES) $< -o $@

$(OBJ_PATH):
				mkdir -p $(OBJ_PATH)

clean:
			$(RM) $(OBJ_PATH)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re