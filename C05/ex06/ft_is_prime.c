/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:29:49 by mulken            #+#    #+#             */
/*   Updated: 2022/08/03 17:30:12 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_is_prime(2));
	printf("%d\n",ft_is_prime(13));
	printf("%d\n",ft_is_prime(0));
	printf("%d\n",ft_is_prime(1));
	return 0;
}*/
