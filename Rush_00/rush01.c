/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:58:11 by sal-hadd          #+#    #+#             */
/*   Updated: 2021/08/09 15:12:46 by aolimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	straight_lines(int x, int y, int i);
void	not_straight(int x, int y, int i, int j);

void	straight_lines(int x, int y, int i)
{
	if (x == 1 && y != 1)
	{
		ft_putchar('\n');
		while (i < y - 2)
		{
			ft_putchar('*');
			ft_putchar('\n');
			i++;
		}
		ft_putchar('\\');
	}
	if (y == 1 && x != 1)
	{
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
	}
	if (x == y)
	{
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

void	not_straight(int x, int y, int i, int j)
{
	ft_putchar('\\');
	ft_putchar('\n');
	i = 0;
	j = 0;
	while (i < y - 2)
	{
		ft_putchar('*');
		while (j < x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('*');
		ft_putchar('\n');
		i++;
	}
	i = 0;
	ft_putchar('\\');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('/');
}

void	rush(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		if (x == 1 || y == 1)
		{
			ft_putchar('/');
			straight_lines(x, y, 0);
		}
		else
		{
			i = 0;
			ft_putchar('/');
			while (i < x - 2)
			{
				ft_putchar('*');
				i++;
			}
			not_straight(x, y, 0, 0);
		}
	}
	if (x <= 0 || y <= 0)
	{
		write(1, "error", 5);
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
