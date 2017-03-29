/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 13:02:34 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:20:12 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_rrb(t_pile **begin_pile_b, int *cpt, char *options)
{
	ps_rrx_reverse_rotate_x(begin_pile_b);
	(*cpt)++;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("rrb");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("rrb");
}
