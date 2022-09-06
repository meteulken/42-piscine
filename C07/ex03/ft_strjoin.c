/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:24:58 by mulken            #+#    #+#             */
/*   Updated: 2022/08/09 12:17:08 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	char	*sonuc;
	int		i;
	int		x;
	int		c;

	sonuc = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x] != '\0')
		{
			sonuc[c++] = strs[i][x++];
		}
		x = 0;
		while (sep[x] != '\0' && i != size - 1)
		{
			sonuc[c++] = sep[x++];
		}
		i++;
	}
	sonuc[c] = '\0';
	return (sonuc);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*tab[5];
	tab[0] = "Ali";
	tab[1] = "Ayşe";
	tab[2] = "Ahmet";
	tab[3] = "Mehmet";
	printf("%s", ft_strjoin(4, tab, ", "));
	return (0);
}*/
