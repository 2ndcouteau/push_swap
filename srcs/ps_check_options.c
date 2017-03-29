/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/19 21:10:10 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/22 17:23:43 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

static	void	save_option(char str, char *options)
{
	if (str == 'a')
		options[0] = '1';
	else if (str == 'c')
		options[1] = '1';
	else if (str == 'z')
		options[2] = '1';
	else if (str == 'r')
		options[3] = '1';
	else if (str == 'g')
		options[4] = '1';
	else
		options[0] = 'D';
}

static	int		check_double_options(char *str)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		while (a != i)
		{
			if (str[i] == str[a])
				return (1);
			a++;
		}
		a = 0;
		i++;
	}
	return (0);
}

static	int		on_the_way(char *str, char *options)
{
	int		i;

	i = 1;
	while (str[i] != '\0')
	{
		save_option(str[i], options);
		if (options[0] == 'D')
			return (0);
		i++;
	}
	return (1);
}

static	int		ft_ischnumberoptions(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '-' && str[i + 1] != '\0')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

char			*ps_check_options(char *str)
{
	char	*options;
	int		len;
	int		check;

	len = ft_strlen(str);
	options = ft_strdup("00000");
	check = ft_ischnumberoptions(str);
	if (str[0] == '-' && len > 1 && len < 7 && check == 0)
	{
		check = on_the_way(str, options);
		if (check == 0)
			return (NULL);
		else if (check_double_options(str) == 1)
			return (NULL);
		else
			return (options);
	}
	else if (str[0] == '-' && check == 0)
		return (NULL);
	else
	{
		options[0] = 'D';
		return (options);
	}
}
