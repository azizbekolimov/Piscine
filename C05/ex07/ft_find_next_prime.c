/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 09:33:43 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/22 09:43:43 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
