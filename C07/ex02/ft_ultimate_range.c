/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:29:03 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/24 21:51:50 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;
	int		*num;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	len = max - min;
	num = (int *)malloc(sizeof(int) * len);
	if (!num)
		return (0);
	while (i < len)
	{
		num[i] = min + i;
		i++;
	}
	*range = num;
	if (i < 0)
		return (-1);
	return (i);
}
