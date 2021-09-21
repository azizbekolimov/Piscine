/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:26:54 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/25 11:53:49 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		str_calc(int size, char **strs, char *sep)
{
	int i;
	int j;
	int memory;

	i = 0;
	j = 0;
	memory = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			j++;
		memory += j;
		i++;
		j = 0;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	memory += i;
	return (memory);
}

char	*str_join(int size, char **strs, char *sep, char *dest)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		j = 0;
		i++;
		if (i < size)
			while (sep[j] != '\0')
				dest[k++] = sep[j++];
		j = 0;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		memory;
	char	*dest;

	if (size == 0)
	{
		dest = (char*)malloc(sizeof(""));
		return (dest);
	}
	memory = str_calc(size, strs, sep);
	dest = (char*)malloc(sizeof(*dest) * memory);
	if (!dest)
		return (0);
	dest = str_join(size, strs, sep, dest);
	return (dest);
}
