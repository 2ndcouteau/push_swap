/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 13:10:45 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:27:02 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_ss(t_pile **begin_pile_a, t_pile **begin_pile_b, int *cpt, \
	char *options)
{
	ps_sx_swap_x(begin_pile_a);
	ps_sx_swap_x(begin_pile_b);
	(*cpt) = (*cpt) + 2;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("ss");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("ss");
}
