/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:39:07 by mulken            #+#    #+#             */
/*   Updated: 2022/08/03 17:25:29 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	say;

	say = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		say *= nb;
		power--;
	}
	return (say);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_iterative_power(5,3));
	printf("%d\n",ft_iterative_power(2,3));
	return 0;
}*/
