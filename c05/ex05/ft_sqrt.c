/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:34:31 by chbachir          #+#    #+#             */
/*   Updated: 2023/04/03 15:30:12 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main()
{
	printf("2147483647 = %d\n", ft_sqrt(2147483647));
	printf("12 = %i\n", ft_sqrt(12));
	printf("81 = %i\n", ft_sqrt(81));
    printf("-25 = %i\n", ft_sqrt(-25));
    printf("49 = %i\n", ft_sqrt(49));
    printf("2 = %i\n", ft_sqrt(2));
    printf("144 = %i\n", ft_sqrt(144));
    printf("2147395600 = %i\n", ft_sqrt(2147395600));
    printf("0 = %i\n", ft_sqrt(0));
    printf("1 = %i\n", ft_sqrt(1));
    printf("8 = %i\n", ft_sqrt(8));
    printf("36 = %i\n", ft_sqrt(36));
	return (0);
} */
