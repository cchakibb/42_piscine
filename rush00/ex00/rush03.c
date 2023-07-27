/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:31:33 by chbachir          #+#    #+#             */
/*   Updated: 2023/03/19 16:36:06 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	h = 1;
	if (x <= 0 || y <= 0)
		write(1, "Please enter only integers bigger than 0\n", 41);
	while (h <= x && y > 0)
	{
		v = 1;
		while (v <= y)
		{
			if ((h == 1 && v == 1) || (v == 1 && h == x))
				ft_putchar('A');
			else if ((v == y && h == 1) || (v == y && x == h))
				ft_putchar('C');
			else if ((h > 1 && v > 1) && (h < x && v < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			v++;
		}
		h++;
		ft_putchar('\n');
	}
}
