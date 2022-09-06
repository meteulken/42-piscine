/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:48:29 by mulken            #+#    #+#             */
/*   Updated: 2022/07/31 10:25:37 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0' && x < nb)
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
    char src[] = "42Kocaeli";
    char dest[] = "Merhaba";
    printf("%s", ft_strncat(dest, src, 7));
}*/
