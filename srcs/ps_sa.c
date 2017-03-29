/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 12:14:19 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/22 18:29:57 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_sa(t_pile **begin_pile_a, int *cpt, char *options)
{
	ps_sx_swap_x(begin_pile_a);
	(*cpt)++;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("sa");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("sa");
}
