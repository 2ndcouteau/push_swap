/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:19:11 by qrosa             #+#    #+#             */
/*   Updated: 2014/11/11 18:06:29 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	if (s1 && s2)
	{
		while (s1[a])
			a++;
		while (s2[b])
		{
			s1[a] = s2[b];
			a++;
			b++;
		}
		s1[a] = '\0';
	}
	return (s1);
}
