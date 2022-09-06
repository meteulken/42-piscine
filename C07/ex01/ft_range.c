/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:25:10 by mulken            #+#    #+#             */
/*   Updated: 2022/08/09 12:30:26 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ptr;
	int		n;

	n = 0;
	ptr = malloc(sizeof(int *) * (max - min));
	if (max <= min || ptr == NULL)
	{
		ptr = NULL;
		return (ptr);
	}
	while (min < max)
	{
		ptr[n] = min;
		min++;
		n++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	int i = 0;
	int *arr;
	int min = 3;
	int max = 5;

	arr = ft_range(min, max);
	while (i < max-min)
		printf("%d, ", arr[i++]);
	return 0;
}*/
