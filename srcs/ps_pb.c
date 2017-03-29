/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 13:07:40 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:23:59 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_pb(t_pile **begin_pile_b, t_pile **begin_pile_a,\
	int *cpt, char *options)
{
	ps_px_push_x(begin_pile_b, begin_pile_a);
	(*cpt)++;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("pb");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("pb");
}
