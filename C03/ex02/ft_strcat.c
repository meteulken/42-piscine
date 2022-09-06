/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:59:53 by mulken            #+#    #+#             */
/*   Updated: 2022/07/31 10:24:22 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[i] = src [x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int    main()
{
    char src[] = "Kocaeli";
    char dest[] = "42 ";
    printf("%s", ft_strcat(dest, src));
}*/
