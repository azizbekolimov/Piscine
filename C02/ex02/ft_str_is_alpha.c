/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:16:18 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/15 18:03:54 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int		i;
	char	alpha;

	i = 0;
	while (str[i] != '\0')
	{
		alpha = str[i];
		if (!((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
