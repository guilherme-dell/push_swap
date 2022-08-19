/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:27:01 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/07/27 03:11:14 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//INCLUDES
# include <unistd.h>
# include <stdio.h>
# include "ft_printf.h"

//PROTOTYPES
int		ft_strncmp(const char *s1, const char *s2, size_t len);
void	ft_find_args(char **envp, t_swap_data swap_data);

//STRUCT LINKED LIST

typedef struct s_swap_data
{
	int		num;
	char	class_num;
	struct s_swap_data *next;
}	t_swap_data;

#endif