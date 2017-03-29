/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 13:14:13 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:24:46 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_rr(t_pile **begin_pile_a, t_pile **begin_pile_b, int *cpt, \
	char *options)
{
	ps_rx_rotate_x(begin_pile_a);
	ps_rx_rotate_x(begin_pile_b);
	(*cpt) = (*cpt) + 2;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("rr");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("rr");
}
