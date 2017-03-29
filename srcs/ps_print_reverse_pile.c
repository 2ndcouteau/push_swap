/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_reverse_pile.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 06:54:35 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 07:12:55 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_print_reverse_pile(t_pile **begin_pile)
{
	t_pile *tmp_pile;

	if (*begin_pile != NULL)
	{
		if ((*begin_pile)->prev != NULL)
		{
			tmp_pile = *begin_pile;
			ft_putnbr((*begin_pile)->nb);
			ft_putchar(' ');
			while ((tmp_pile)->next->nb != (*begin_pile)->nb)
			{
				tmp_pile = tmp_pile->next;
				ft_putnbr((tmp_pile)->nb);
				if ((tmp_pile)->next->nb != (*begin_pile)->nb)
					ft_putchar(' ');
			}
		}
		else
			ft_putnbr((*begin_pile)->nb);
	}
}
