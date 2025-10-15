/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:40:34 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/10/15 19:07:04 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void ft_is_negative(int n)
{
	char *letter;
	
    if (n < 0)
        letter = "N";
    else 
        letter = "P";    
    ft_putchar(letter);
}

/* int main(void)
{
	ft_is_negative(-12);
} */