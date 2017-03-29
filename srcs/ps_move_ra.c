/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_move_ra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/19 16:30:25 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 03:38:30 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_move_ra(t_pile **begin_pile_a, int min, int *cpt)
{
	while ((*begin_pile_a)->nb != min)
	{
		ps_ra(begin_pile_a, cpt, "00");
		ft_putchar(' ');
	}
}
