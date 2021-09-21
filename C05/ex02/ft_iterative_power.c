/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolimov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:15:15 by aolimov           #+#    #+#             */
/*   Updated: 2021/08/22 17:58:23 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0 || nb == 1)
		return (1);
	result = nb;
	while (--power > 0)
		result *= nb;
	return (result);
}
