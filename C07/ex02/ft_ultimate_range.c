/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:25:41 by mulken            #+#    #+#             */
/*   Updated: 2022/08/09 13:36:56 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	c;
	int	*d;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	c = max - min;
	d = ((int *)malloc(c * sizeof(int)));
	if (d == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	while (i < c)
	{
		d[i] = min + i;
		i++;
	}
	return (c);
}
/*
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = max - min;
	ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
