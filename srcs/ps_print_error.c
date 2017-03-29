/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:12:55 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/16 19:19:53 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_print_error(char *str)
{
	if (str != NULL)
	{
		ft_putstr_fd("Error : ", 2);
		ft_putendl_fd(str, 2);
	}
	else
		ft_putendl_fd("Error", 2);
}
