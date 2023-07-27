/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:03:19 by chbachir          #+#    #+#             */
/*   Updated: 2023/03/23 11:07:47 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(unsigned char c)
{
	char	buf[3];
	char	*hex;

	hex = "0123456789abcdef";
	buf[0] = '\\';
	buf[1] = hex[c / 16];
	buf[2] = hex[c % 16];
	write(1, buf, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			hexa((unsigned char)str[i]);
		i++;
	}
}
