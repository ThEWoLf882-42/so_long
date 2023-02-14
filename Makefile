NAME = so_long
NAME_B = so_long_bonus

CC = cc
FLAGS = -Wall -Werror -Wextra -O3
ARGS = -Iinclude -lglfw -L"/goinfre/agimi/.brew/Cellar/glfw/3.3.8/lib"
LIBRARIES = -L$(MLX42_DIRECTORY) -L$(LIBFT_DIRECTORY)
INCLUDES = -I$(HEADERS_DIRECTORY) -I$(MLX42_HEADERS) -I$(LIBFT_HEADERS)

LIBFT = $(LIBFT_DIRECTORY)libft.a
LIBFT_DIRECTORY = ./libft/
LIBFT_HEADERS = $(LIBFT_DIRECTORY)includes/

MLX42 = $(MLX42_DIRECTORY)/build/libmlx42.a
MLX42_DIRECTORY = ../MLX42/
MLX42_HEADERS = $(MLX42_DIRECTORY)include/

HEADERS_LIST = so_long.h
HEADERS_DIRECTORY = ./includes/
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))

SOURCES_DIRECTORY = ./sources/
SOURCES_DIRECTORY_B = ./sources/
SOURCES_LIST =	down.c \
				hook.c \
				left.c \
				load_png.c \
				map.c \
				right.c \
				set_coin.c \
				set_frame.c \
				set_grass.c \
				up.c \

SOURCES_LIST_M =	so_long.c
SOURCES_LIST_B =	

SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))
SOURCES_M = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST_M))
SOURCES_B = $(addprefix $(SOURCES_DIRECTORY_B), $(SOURCES_LIST_B))

OBJECTS_DIRECTORY = objects/
OBJECTS_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS_LIST_M = $(patsubst %.c, %.o, $(SOURCES_LIST_M))
OBJECTS_LIST_B = $(patsubst %.c, %.o, $(SOURCES_LIST_B))
OBJECTS	= $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))
OBJECTS_M = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST_M))
OBJECTS_B = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST_B))


# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

.PHONY: all bonus clean fclean re

all: $(NAME)

bonus: $(NAME_B)

$(NAME): $(LIBFT) $(OBJECTS_DIRECTORY) $(OBJECTS) $(OBJECTS_M)
	@$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) $(LIBFT) $(MLX42) $(OBJECTS) $(OBJECTS_M) $(ARGS) -o $(NAME)
	@echo "\n$(NAME): $(GREEN)$(NAME) object files were created$(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

$(NAME_B): $(LIBFT) $(OBJECTS_DIRECTORY) $(OBJECTS) $(OBJECTS_B)
	@$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) $(LIBFT) $(MLX42) $(OBJECTS) $(OBJECTS_B) $(ARGS) -o $(NAME)
	@echo "\n$(NAME): $(GREEN)$(NAME_B) object files were created$(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME_B) was created$(RESET)"

$(OBJECTS_DIRECTORY):
	@mkdir -p $(OBJECTS_DIRECTORY)
	@echo "$(NAME): $(GREEN)$(OBJECTS_DIRECTORY) was created$(RESET)"

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.c $(HEADERS)
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(GREEN).$(RESET)\c"

$(LIBFT):
	@echo "$(NAME): $(GREEN)creating $(LIBFT)...$(RESET)"
	@$(MAKE) -sC $(LIBFT_DIRECTORY)

clean:
	@$(MAKE) -sC $(LIBFT_DIRECTORY) clean
	@rm -rf $(OBJECTS_DIRECTORY)
	@echo "$(NAME): $(RED)$(OBJECTS_DIRECTORY) was deleted$(RESET)"
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean: clean
	@rm -f $(MLX42)
	@echo "$(NAME): $(RED)$(MLX42) was deleted$(RESET)"
	@rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
	@rm -f $(NAME_B)
	@echo "$(NAME): $(RED)$(NAME_B) was deleted$(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
