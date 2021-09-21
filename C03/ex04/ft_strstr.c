/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:25:45 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/17 21:11:09 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
