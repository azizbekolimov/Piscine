/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:54:42 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/15 18:09:17 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	word;

	i = 0;
	while (str[i] != '\0')
	{
		word = str[i];
		if (word >= 'a' && word <= 'z')
		{
			word = word - 32;
			str[i] = word;
		}
		i++;
	}
	return (str);
}
