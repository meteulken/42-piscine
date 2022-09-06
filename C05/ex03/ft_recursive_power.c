/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:29:18 by mulken            #+#    #+#             */
/*   Updated: 2022/08/03 17:26:18 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		sayi;

	sayi = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (sayi);
}
/*#include<stdio.h>
int main()
{
    printf("%d\n",ft_recursive_power(5,3));
    printf("%d\n",ft_recursive_power(0,3));
    return 0;
}*/
