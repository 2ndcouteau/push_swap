/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 12:59:07 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:18:34 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_rb(t_pile **begin_pile_b, int *cpt, char *options)
{
	ps_rx_rotate_x(begin_pile_b);
	(*cpt)++;
	if (options[1] == '1')
	{
		ft_putstr(C_RED);
		ft_putstr("rb");
		ft_putstr(C_NONE);
	}
	else
		ft_putstr("rb");
}
