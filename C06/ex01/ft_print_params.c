/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:05:01 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/22 14:13:58 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_params(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int index;

	index = 1;
	while (index < ac)
	{
		ft_params(av[index]);
		index++;
	}
	return (0);
}
