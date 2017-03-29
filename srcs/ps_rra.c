/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 13:00:47 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:19:41 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_rra(t_pile **begin_pile_a, int *cpt, char *options)
{
	ps_rrx_reverse_rotate_x(begin_pile_a);
	(*cpt)++;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("rra");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("rra");
}
