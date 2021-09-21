/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:41:16 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/15 18:04:51 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int		i;
	char	num;

	i = 0;
	while (str[i] != '\0')
	{
		num = str[i];
		if (!(num >= '1' && num <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
