/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:28:30 by chbachir          #+#    #+#             */
/*   Updated: 2023/04/03 15:37:49 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	total_length;
	unsigned int	dest_length;
	unsigned int	src_length;
	int				dest_end;
	int				i;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size > dest_length)
		total_length = dest_length + src_length;
	else
		total_length = src_length + size;
	dest_end = 0;
	while (dest[dest_end])
		dest_end++;
	i = 0;
	while (src[i] && ((dest_length++ + 1) < size))
	{
		dest[dest_end++] = src[i++];
	}
	dest[dest_end] = '\0';
	return (total_length);
}

 
#include <stdio.h>
#include <bsd/string.h>

/* int main(void)
{
	char *src = "Thank you";
	char dest[] = "Andrei";
	unsigned int size = 3;


	//printf("%u\n", ft_strlcat(dest, src, size));
	printf("%zu\n", strlcat(dest, src, size));
	
	printf("%s\n", dest);
	return (0);
} */

 int main(void)
{
    char* src = "xyz";
    char dest[100];

    dest[0] = 'a';
    dest[1] = 'a';
    dest[2] = 'a';
    dest[3] = 'a';
    dest[4] = '\0';

    unsigned int size = 6;
    printf("%u\n", ft_strlcat(dest, src, size));
    printf("%s\n", dest);

    dest[0] = 'a';
    dest[1] = 'a';
    dest[2] = 'a';
    dest[3] = 'a';
    dest[4] = '\0';

    printf("%zu\n", strlcat(dest, src, size));
    printf("%s\n", dest);
    return (0);
}
