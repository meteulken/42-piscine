/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:22:56 by mulken            #+#    #+#             */
/*   Updated: 2022/08/03 17:24:53 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (1);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_recursive_factorial(4));
	printf("%d\n",ft_recursive_factorial(0));
	printf("%d\n",ft_recursive_factorial(-123));
	return 0;
}*/
