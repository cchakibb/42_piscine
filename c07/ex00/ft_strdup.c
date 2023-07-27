/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:40:33 by chbachir          #+#    #+#             */
/*   Updated: 2023/04/05 17:26:54 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		i;

	duplicate = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*src = "je peux pas, j'ai piscine";

	printf("%p\n", src);
	//printf("%s\n", ft_strdup(src));
	printf("%p\n", ft_strdup(src));
	return (0);
}
 */
