/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:46:04 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/15 18:08:33 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int		i;
	char	pchar;

	i = 0;
	while (str[i] != '\0')
	{
		pchar = str[i];
		if (!(pchar >= 32 && pchar <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
