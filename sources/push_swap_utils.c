/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:50:25 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/06/28 00:19:19 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_args(char **envp, t_swap_data swap_data)
{
	while (*envp != NULL)
	{
		if(ft_strncmp(*envp, "ARGS=", 4) == 0)
		{
			ft_printf("FIND: %s\n", *envp);
		}
		envp++;
	}

}