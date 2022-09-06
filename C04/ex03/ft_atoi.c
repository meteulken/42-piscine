/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:32:39 by mulken            #+#    #+#             */
/*   Updated: 2022/08/01 17:14:42 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		x;
	int		sonuc;

	i = 0;
	x = 1;
	sonuc = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
				x *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sonuc = (str[i] - '0') + (sonuc * 10);
		i++;
	}
	return (sonuc * x);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n",ft_atoi("      --+-+1242--+-kl865"));
}*/
