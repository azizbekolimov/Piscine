/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:12:19 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/15 18:06:30 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int		i;
	char	word;

	i = 0;
	while (str[i] != '\0')
	{
		word = str[i];
		if (!(word >= 'A' && word <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
