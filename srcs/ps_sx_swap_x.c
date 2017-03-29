/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sx_swap_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 23:36:44 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/27 11:58:54 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_sx_swap_x(t_pile **begin_pile)
{
	int tmp;

	if (*begin_pile != NULL)
	{
		tmp = (*begin_pile)->nb;
		(*begin_pile)->nb = (*begin_pile)->next->nb;
		(*begin_pile)->next->nb = tmp;
	}
}
