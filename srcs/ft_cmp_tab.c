/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/14 20:42:51 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/15 13:14:30 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

static int	ft_strzcmp(char *s1, char *s2)
{
	int i;
	int a;

	i = 0;
	a = 0;
	if (s1[0] == '-')
		i++;
	if (s2[0] == '-')
		a++;
	while (s1[i] == '0')
		i++;
	while (s2[a] == '0')
		a++;
	if (s1[i] == '\0' && s2[a] == '\0')
		return (0);
	if ((s1[0] == '-' && s2[0] != '-') || (s1[0] != '-' && s2[0] == '-'))
		return (1);
	while (s1[i] != '\0' && s2[a] != '\0')
	{
		if (s1[i] != s2[a])
			return (1);
		i++;
		a++;
	}
	return (s1[i] - s2[a]);
}

int			ft_cmp_tab(char **argv, char *str, int len)
{
	int		cpt;

	cpt = 0;
	if (argv)
	{
		while (argv[cpt] && cpt < len)
		{
			if (ft_strzcmp(argv[cpt], str) == 0)
			{
				ps_error_init(1);
				return (0);
			}
			cpt++;
		}
	}
	return (1);
}
