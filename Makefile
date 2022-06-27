NAME = push_swap

GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0m

CC= gcc
FLAGS= -Wall -Wextra -Werror
MAKE_NOPRINT = $(MAKE) --no-print-directory
INCLUDES = -I ./includes/ -I ./libs/ft_printf/

SWAP_SRC = ./sources/*.c
ULTIS_SRC = ./utils/*.c

FT_PRINTF_PATH = libs/ft_printf/
FT_PRINTF = libs/ft_printf/libftprintf.a

all:$(NAME)

$(NAME):${FT_PRINTF}
	@$(CC) $(INCLUDES) $(SWAP_SRC) $(ULTIS_SRC) $(FT_PRINTF) -o $(NAME)
	@echo "$(GREEN)push_swap compiled 🔋 $(RESET)"

$(FT_PRINTF):
	@$(MAKE_NOPRINT) -C $(FT_PRINTF_PATH)

clean:
	@$(MAKE_NOPRINT) clean -C $(FT_PRINTF_PATH)
	@echo "$(RED)compilation files deleted $(RESET)"

fclean:
	@$(MAKE_NOPRINT) fclean -C ${FT_PRINTF_PATH}
	@rm -fr $(NAME)
	@echo "$(RED)push_swap was deleted $(RESET)"

re: fclean all

.PHONY: all clean fclean re

