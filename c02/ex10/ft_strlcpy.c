/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:29:34 by chbachir          #+#    #+#             */
/*   Updated: 2023/03/26 16:21:41 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclength;

	i = 0;
	srclength = 0;
	while (src[srclength])
		srclength++;
	if (size)
	{
		while (i < size - 1)
		{
			if (src[i] != '\0')
				dest[i] = src[i];
			else
				break ;
			i++;
		}
		dest[i] = '\0';
	}
	return (srclength);
}
