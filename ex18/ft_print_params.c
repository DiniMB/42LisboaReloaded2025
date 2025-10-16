/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:30:38 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/10/15 19:10:02 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *src)
{
	while (*src)
	{
		ft_putchar(*src);
		src++;
	}
	ft_putchar('\n');
}

int	main(int agrc, char **argv)
{
	int	i;

	i = 1;
	(void)agrc;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
