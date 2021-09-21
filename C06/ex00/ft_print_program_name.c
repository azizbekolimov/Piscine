/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:56:10 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/22 11:47:43 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_name(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int ac, char **av)
{
	if (ac > 0)
		ft_name(av[0]);
	write(1, "\n", 1);
}
