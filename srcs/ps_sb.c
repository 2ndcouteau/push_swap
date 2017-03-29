/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 12:54:36 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:22:09 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_sb(t_pile **begin_pile_b, int *cpt, char *options)
{
	ps_sx_swap_x(begin_pile_b);
	(*cpt)++;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("sb");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("sb");
}
