/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_initialisation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/14 20:28:02 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 03:47:23 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

static	int		init_pile(t_pile **begin_pile, char **argv, int mark)
{
	if (!(*begin_pile = ft_create_dnew(argv[mark + 1])) ||\
	ft_ischnumber(argv[mark + 1]) == 0)
		return (0);
	ft_boucle_pile(begin_pile, begin_pile);
	return (1);
}

t_pile			*ps_initialisation(int argc, char **argv, int mark)
{
	int		cpt;
	t_pile	*tmp_pile;
	t_pile	*begin_pile;

	cpt = 2;
	if (init_pile(&begin_pile, argv, mark) == 0)
		return (NULL);
	if (mark == 1)
		cpt++;
	while (cpt < argc)
	{
		if (ft_ischnumber(argv[cpt]) && ft_cmp_tab(argv, argv[cpt], cpt))
		{
			if (!(tmp_pile = ft_create_dnew(argv[cpt])))
				return (NULL);
			ft_push_back(&begin_pile, tmp_pile);
			cpt++;
		}
		else
			return (NULL);
	}
	begin_pile = (begin_pile)->next;
	return (begin_pile);
}
