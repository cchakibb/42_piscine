/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:28:47 by jdyar             #+#    #+#             */
/*   Updated: 2023/04/02 22:31:44 by chbachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	check_argc(int argc)
{
	if (argc != 2)
		return (0);
	else
		return (1);
}

int	check_fd(int fd)
{
	if (fd > 2)
		return (1);
	return (0);
}

void	free_mem(char *wtf, char *omg)
{
	free(wtf);
	free(omg);
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	*buf;
	char	*mynewstring;
	char	not_finalstr[26];
	int		i;

	buf = (char *)malloc(sizeof(char) * 4096);
	if (check_argc(argc))
	{
		fd = open("numbers.dict", O_RDONLY);
		check_fd(fd);
		read(fd, buf, 4096);
		mynewstring = malloc(sizeof(char) * 4096);
		ft_strcpy(mynewstring, ft_strstr(buf, argv[1]));
		i = 0;
		while (mynewstring[i] != '\n')
		{
			not_finalstr[i] = mynewstring[i];
			i++;
		}
		ft_str_is_alpha(not_finalstr);
		close(fd);
		free_mem(buf, mynewstring);
	}
	return (0);
}
