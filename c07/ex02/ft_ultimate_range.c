/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:40:39 by chbachir          #+#    #+#             */
/*   Updated: 2023/04/05 17:27:51 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
		result[i++] = min++;
	*range = result;
	return (i);
}
/* 
#include <stdio.h>

int main ()
{

	int *range;
	printf("%d\n", ft_ultimate_range(&range, 5, 10));
	
}
 */
