/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_move_rra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/19 16:36:40 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 03:38:43 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_move_rra(t_pile **begin_pile_a, int min, int *cpt)
{
	while ((*begin_pile_a)->nb != min)
	{
		ps_rra(begin_pile_a, cpt, "00");
		ft_putchar(' ');
	}
}
