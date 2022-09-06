/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:17:47 by mulken            #+#    #+#             */
/*   Updated: 2022/08/03 17:24:22 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sayi;

	sayi = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		sayi *= nb;
		nb--;
	}
	return (sayi);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(-3));
	printf("%d\n",ft_iterative_factorial(0));
	return 0;
}*/
