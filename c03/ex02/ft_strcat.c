/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:07:38 by chbachir          #+#    #+#             */
/*   Updated: 2023/03/28 19:44:03 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len])
		len++;
	while (src[i])
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
	char *src = "ki\0b";
	char dest[] = "cha";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest, src));

	return 0;
}
*/
