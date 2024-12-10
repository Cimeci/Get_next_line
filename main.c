/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:36:13 by inowak--          #+#    #+#             */
/*   Updated: 2024/12/09 15:46:55 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	int		fd;
	char	*next_line;

	fd = open("mon_fichier1.txt", O_RDONLY);
	next_line = NULL;
	next_line = get_next_line(0);
	while (next_line != NULL)
	{
		printf("%s", next_line);
		free(next_line);
		next_line = get_next_line(0);
	}
	close(fd);
	return (0);
}
