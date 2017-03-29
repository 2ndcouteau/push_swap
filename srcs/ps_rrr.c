/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 13:16:12 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:24:57 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_rrr(t_pile **begin_pile_a, t_pile **begin_pile_b, int *cpt, \
	char *options)
{
	ps_rrx_reverse_rotate_x(begin_pile_a);
	ps_rrx_reverse_rotate_x(begin_pile_b);
	(*cpt) = (*cpt) + 2;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("rrr");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("rrr");
}
