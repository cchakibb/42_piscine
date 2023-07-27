/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:40:36 by chbachir          #+#    #+#             */
/*   Updated: 2023/04/05 17:27:32 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		return (0);
	i = max - min;
	result = (int *)malloc(sizeof(int) * (i));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		result[i++] = min++;
	return (result);
}
/* 
#include <stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i = 0;
	int	size;
	min = 5;
	max = 15;
	size = max - min;
	arr = ft_range(min, max);
	while(i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
} 
*/
