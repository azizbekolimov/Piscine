/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:08:55 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/06 11:38:04 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char first;
	char second;

	first = 'N';
	second = 'P';
	if (n < 0)
	{
		write(1, &first, 1);
	}
	else
	{
		write(1, &second, 1);
	}
}
