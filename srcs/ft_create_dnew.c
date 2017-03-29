/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_dnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/15 17:20:03 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/18 19:26:15 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

t_pile		*ft_create_dnew(char *str)
{
	t_pile		*elem;

	if (ft_check_intm(str))
		return (NULL);
	if (!(elem = malloc(sizeof(*elem))))
		return (NULL);
	if (elem != NULL && str)
	{
		elem->nb = ft_atoi(str);
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
