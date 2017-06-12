CC				=	clang
NAME			=	push_swap
FLAGS			=	-Wall -Wextra -Werror
FRAMEWORKS		=	-framework OpenGL -framework AppKit
MLX_PATH		=	minilibx_macos/
LIB_PATH		=	libft/
LIB				=	$(LIB_PATH)libft.a
LIB_LINK		=	-L $(LIB_PATH) -lft -L $(MLX_PATH) -lmlx # -L /usr/local/lib -lmlx
INCLUDES		=	-I $(LIB_PATH)includes -I ./includes -I $(MLX_PATH) # -I /usr/local/include
SRCS			=	src/main.c									\
					src/parser.c								\
					src/options.c								\
					src/stack.c									\
					src/resolve.c								\
					src/check_sort.c							\
					src/print.c									\
					src/swap.c									\
					src/push.c									\
					src/rotate.c								\
					src/reverse.c								\
					src/interactive_mode.c						\
					src/algo_bubble_sort.c						\
					src/algo_fifty_fifty.c						\
					src/algo_select_sort.c						\
					src/algo_merge.c							\
					src/algo_up_down.c							\
					src/almost_sorted.c
SRCS			+=	src/mlx_env.c								\
					src/mlx_my_pixel_put_to_image.c				\
					src/mlx_draw_line.c							\
					src/mlx_image.c								\
					src/mlx_draw_ps.c							\
					src/mlx_keys.c
SRCS			+=	src/color_calc.c							\
					src/color_convert.c							\
					src/color_gradient.c
OBJS			=	$(SRCS:src/%.c=obj/%.o)

# COLORS
C_NO			=	"\033[00m"
C_OK			=	"\033[35m"
C_GOOD			=	"\033[32m"
C_ERROR			=	"\033[31m"
C_WARN			=	"\033[33m"

# DBG MESSAGE
SUCCESS			=	$(C_GOOD)SUCCESS$(C_NO)
OK				=	$(C_OK)OK$(C_NO)


all: obj $(NAME)

$(NAME): $(LIB) $(OBJS)
	@$(CC) $(FLAGS) $(LIB_LINK) $(FRAMEWORKS) -o $@ $^
	@echo "Compiling" [ $(NAME) ] $(SUCCESS)

$(LIB):
	@make -C $(LIB_PATH)

obj:
	@mkdir -p obj

obj/%.o: src/%.c ./includes/*.h
	@$(CC) $(FLAGS) $(INCLUDES) -c -o $@ $<
	@echo "Linking" [ $< ] $(OK)

clean:
	@rm -f $(OBJS)
	@rm -rf obj
	@echo "Cleaning" [ $(NAME) ] "..." $(OK)

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIB_PATH) fclean
	@echo "Delete" [ $(NAME) ] $(OK)

re: fclean all

.PHONY: clean all re fclean

