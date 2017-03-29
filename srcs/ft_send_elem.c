/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_elem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 19:22:11 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/26 17:54:57 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

t_pile	*ft_send_elem(int nb)
{
	t_pile	*elem;

	if (!(elem = malloc(sizeof(*elem))))
		return (NULL);
	if (elem != NULL)
	{
		elem->nb = nb;
		elem->prev = NULL;
		elem->next = NULL;
	}
	else
	{
		elem->nb = '\0';
		elem->prev = NULL;
		elem->next = NULL;
	}
	return (elem);
}
