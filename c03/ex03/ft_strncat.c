/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:18:07 by chbachir          #+#    #+#             */
/*   Updated: 2023/03/29 12:03:31 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (dest[len])
		len++;
	while (i < nb && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *src = "Mais\0on";
	char dest[] = "Je vais a la ";
	unsigned int nb;
	nb = 7;
	
	//printf("%s\n", ft_strncat(dest, src, nb));
	printf("%s\n", strncat(dest, src, nb));

	return 0;
}
 */
