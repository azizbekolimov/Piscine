/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:53:57 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/15 18:05:50 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int		i;
	char	word;

	i = 0;
	while (str[i] != '\0')
	{
		word = str[i];
		if (!(word >= 'a' && word <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
