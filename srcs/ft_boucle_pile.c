/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boucle_pile.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 22:31:18 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/24 23:38:53 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ft_boucle_pile(t_pile **begin_pile, t_pile **end_pile)
{
	if (*begin_pile != NULL && *end_pile != NULL)
	{
		if ((*begin_pile)->nb == (*end_pile)->nb)
		{
			(*begin_pile)->next = *end_pile;
			(*begin_pile)->prev = *end_pile;
			(*end_pile)->next = *begin_pile;
			(*end_pile)->prev = *begin_pile;
		}
	}
}
