/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:03:23 by chbachir          #+#    #+#             */
/*   Updated: 2023/03/22 19:45:00 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	swap;

	i = 0;
	swap = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (swap && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!swap && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			swap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			swap = 0;
		else
			swap = 1;
		i++;
	}
	return (str);
}
