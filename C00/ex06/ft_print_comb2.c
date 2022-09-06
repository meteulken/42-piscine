/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:22:25 by mulken            #+#    #+#             */
/*   Updated: 2022/07/22 07:19:05 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			ft_putchar(' ');
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (a != 98 || b != 99)
			{
				write(1, &", ", 2);
			}
			b++;
		}
		a++;
	}
}
