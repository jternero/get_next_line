/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:18:36 by jternero          #+#    #+#             */
/*   Updated: 2022/12/11 23:24:28 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("testlines.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("line: %s", line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
}
