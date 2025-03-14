NAME = so_long
MLX = mlx

LIBRARY_LIBFT = libft/libft.a
LIBRARY_PRINTF = ft_printf/libftprintf.a
SRCS = 	main.c check_map_name.c get_next_line.c get_next_line_utils.c map_clear.c print_error.c create_map.c\
		check_map_is_correct.c create_map_copy.c check_map_can_finish.c key_press_hook.c go_to_destination.c\
		check_player_can_goal.c window_close_hook.c swap_position.c mlx_setting.c info_free.c explore_map_and_replace_char.c set_hooks.c\

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -Ilibft/libft.h -Ift_printf/ft_printf.h

MLX_PATH = ./minilibx-linux

MAKE = make

MLX_MAKE = make -C $(MLX_PATH) 

MLX_FLAG = -L$(MLX_PATH) -l$(MLX) -I$(MLX_PATH) -lXext -lX11 -lm -L/usr/X11R6/lib

RM = rm -f

all: $(NAME)

$(NAME):$(MLX_PATH) $(OBJS) $(LIBRARY_PRINTF) $(LIBRARY_LIBFT)
	$(MLX_MAKE)
	$(CC) $(CFLAGS) $(OBJS) $(LIBRARY_PRINTF) $(LIBRARY_LIBFT) $(MLX_FLAG) -o $(NAME)

$(LIBRARY_LIBFT) :
	$(MAKE) -C ./libft

$(LIBRARY_PRINTF) :
	$(MAKE) -C ./ft_printf

clean:
	$(RM) $(OBJS)
	$(MAKE) -C ./ft_printf fclean
	$(MAKE) -C ./libft fclean

fclean: clean
	$(RM) $(NAME) $(OBJS)
	$(MAKE) -C ./ft_printf fclean
	$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re
