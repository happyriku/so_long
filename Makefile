NAME = so_long

LIBRARY_LIBFT = libft/libft.a
LIBRARY_PRINTF = ft_printf/libftprintf.a
SRCS = main.c check_map_name.c create_map.c get_next_line.c get_next_line_utils.c map_clear.c print_error.c\
		check_map_is_correct.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Ilibft/libft.h -Ift_printf/ft_printf.h
MAKE = make
RM = rm -f

all: $(NAME)

$(NAME):$(OBJS) $(LIBRARY_PRINTF) $(LIBRARY_LIBFT)
	$(CC) $(CFLAGS) $^ -o $@

$(LIBRARY_LIBFT) :
	$(MAKE) -C ./libft

$(LIBRARY_PRINTF) :
	$(MAKE) -C ./ft_printf

clean:
	$(RM) $(OBJS)
	$(MAKE) -C ./ft_printf fclean
	$(MAKE) -C ./libft fclean

fclean:
	$(RM) $(NAME) $(OBJS)
	$(MAKE) -C ./ft_printf fclean
	$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re
