/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:40:43 by chbachir          #+#    #+#             */
/*   Updated: 2023/04/05 18:26:31 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	sep_length;
	int	strs_length;
	int	i;
	int	j;

	sep_length = 0;
	while (sep[sep_length])
		sep_length++;
	sep_length *= size - 1;
	strs_length = 0;
	i = 0;
	j = 0;
	while (i < size)
	{	
		while (strs[i][j])
		{
			j++;
		}
		strs_length += j;
		j = 0;
		i++;
	}
	return (sep_length + strs_length);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*joined_string;	
	int		len;

	if (size == 0)
	{
		joined_string = (char *) malloc(1 * sizeof(char));
		if (joined_string == NULL)
			return (NULL);
		joined_string[0] = '\0';
		return (joined_string);
	}
	len = ft_strlen(size, strs, sep);
	joined_string = (char *)malloc(sizeof(char) * len);
	joined_string[0] = '\0';
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(joined_string, strs[i]);
		ft_strcat(joined_string, sep);
		i++;
	}
	ft_strcat(joined_string, strs[i]);
	return (joined_string);
}
/* 
#include <stdio.h>

int main ()
{
	int size = 0;
	char *strs[] = {"ab", "bc", "ef"}; 
	char *sep = "||";

	printf("%s\n", ft_strjoin(size, strs, sep));
	return 0;
} */
