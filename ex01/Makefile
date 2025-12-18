# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 18:24:41 by lylrandr          #+#    #+#              #
#    Updated: 2025/12/18 13:30:38 by lylrandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 17:39:55 by lylrandr          #+#    #+#              #
#    Updated: 2025/12/18 13:30:33 by lylrandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_DIR = src
SRC = $(shell find $(SRC_DIR) -type f -name "*.cpp")
OBJDIR = obj
OBJS = $(SRC:src/%.cpp=$(OBJDIR)/%.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@ $(CFLAGS)

$(OBJDIR)/%.o: src/%.cpp
# Crée le sous-dossier si nécessaire
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -MMD -c $< -o $@

# S'assurer que obj/ existe
$(OBJDIR):
	@mkdir -p $(OBJDIR)

-include $(DEPS)

clean:
	@rm -f $(OBJS) $(DEPS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJDIR)

re: fclean all

.PHONY: all clean fclean re
