/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:37:17 by chbachir          #+#    #+#             */
/*   Updated: 2023/03/28 21:10:09 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!(*to_find))
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "Je m'appelle Chakib et tu t'appelle Lulu";
	char *to_find = "Chakib";

	printf("%s\n", strstr(str, to_find));

	return 0;
}
 */
