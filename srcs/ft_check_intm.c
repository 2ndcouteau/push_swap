/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_intm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 19:20:57 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/15 13:15:58 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

static int	ft_strdcmp(char *str1, char *str2, int i)
{
	while (str1[i] != '\0')
	{
		if ((str1[i] - str2[i]) > 0)
			return (str1[i] - str2[i]);
		else
			i++;
	}
	return (-1);
}

int			ft_check_intm(char *str)
{
	int		len;

	len = ft_strlen(str);
	if (len > 9)
	{
		if (len < 12)
		{
			if (str[0] == '-')
			{
				if (ft_strdcmp(str, "-2147483648", 1) < 0)
					return (0);
			}
			if (ft_strdcmp(str, "2147483647", 0) < 0)
				return (0);
		}
		ps_error_init(2);
		return (1);
	}
	return (0);
}
