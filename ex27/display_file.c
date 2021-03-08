/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenshi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 22:48:11 by kenshi            #+#    #+#             */
/*   Updated: 2020/04/17 02:18:51 by kenshi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(char *filename)
{
	int		fd;
	char	character;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &character, 1))
		write(1, &character, 1);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc >= 3)
		write(2, "Too many arguments.\n", 20);
	else
		display_file(argv[1]);
	return (0);
}
