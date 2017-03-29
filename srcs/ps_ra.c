/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 12:57:13 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:17:44 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_ra(t_pile **begin_pile_a, int *cpt, char *options)
{
	ps_rx_rotate_x(begin_pile_a);
	(*cpt)++;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("ra");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("ra");
}
