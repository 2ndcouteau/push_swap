/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 13:05:02 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:23:12 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_pa(t_pile **begin_pile_a, t_pile **begin_pile_b,\
	int *cpt, char *options)
{
	ps_px_push_x(begin_pile_a, begin_pile_b);
	(*cpt)++;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("pa");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("pa");
}
