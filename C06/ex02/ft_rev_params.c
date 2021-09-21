/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:18:44 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/22 14:16:21 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_params(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int index;

	index = 0;
	while (++index < ac)
	{
		ft_rev_params(av[ac - index]);
	}
	return (0);
}
