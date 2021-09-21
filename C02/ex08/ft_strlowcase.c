/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:59:16 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/15 21:04:13 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	word;

	i = 0;
	while (str[i] != '\0')
	{
		word = str[i];
		if (word >= 'A' && word <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
