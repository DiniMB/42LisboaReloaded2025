/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:18:22 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/10/15 19:23:36 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	ft_disp_file(char *filename)
{
	int		fd;
	int		ret;
	char	buff[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	while ((ret = read(fd, buff, 1024)) > 0)
		write(1, buff, ret);
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_disp_file(argv[1]);
	return (0);
}
