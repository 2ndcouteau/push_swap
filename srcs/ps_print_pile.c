/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_pile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:27:35 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/10 16:06:40 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_print_pile(t_pile **begin_pile)
{
	t_pile *tmp_pile;

	if (*begin_pile != NULL)
	{
		if ((*begin_pile)->prev != NULL)
		{
			tmp_pile = *begin_pile;
			while ((tmp_pile)->prev->nb != (*begin_pile)->nb)
			{
				tmp_pile = tmp_pile->prev;
				ft_putnbr((tmp_pile)->nb);
				ft_putchar(' ');
			}
			ft_putnbr((*begin_pile)->nb);
		}
		else
			ft_putnbr((*begin_pile)->nb);
	}
}
