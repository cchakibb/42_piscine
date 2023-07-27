/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:34:25 by chbachir          #+#    #+#             */
/*   Updated: 2023/04/03 13:18:27 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/* 
#include <stdio.h>
int main()
{
	int nb = 0;
	int power = 0;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
 */
