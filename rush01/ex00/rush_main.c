/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:49:16 by jdyar             #+#    #+#             */
/*   Updated: 2023/03/26 22:00:21 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error_handling(int argc, char *argv)
{
	int	i;

	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (argv[i])
	{
		if (!(argv[i] >= 49 && argv[i] <= 52) && !(argv[i] == 32))
		{
			write (1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	if (i != 31)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (error_handling(argc, argv[1]))
		return (1);
	else
	{
		write(1, "Do we still get points for trying our best ??? 😎😀\n", 56);
	}
	return (0);
}
