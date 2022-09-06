/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:53:26 by mulken            #+#    #+#             */
/*   Updated: 2022/07/31 10:27:12 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
			x++;
		if (to_find[x] == '\0')
			return (str + i);
		i++;
		x = 0;
	}
	return (0);
}

/*#include <stdio.h>
int    main()
{
    char str[] = "Ve 42 Kocaeli";
    char find[] = "42";
    printf("%s", ft_strstr(str, find));
}*/
