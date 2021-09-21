/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:04:46 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/24 21:38:16 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int n;
	int *array;

	if (min >= max)
		return (0);
	n = max - min;
	i = 0;
	if (!(array = (int*)malloc(sizeof(*array) * n)))
		return (0);
	while (i < n)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
