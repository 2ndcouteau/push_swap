/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrx_reverse_rotate_x.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 23:02:45 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/27 11:59:28 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_rrx_reverse_rotate_x(t_pile **begin_pile)
{
	if (*begin_pile != NULL)
		*begin_pile = (*begin_pile)->prev;
}
