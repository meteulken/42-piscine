/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:51:05 by mulken            #+#    #+#             */
/*   Updated: 2022/08/01 16:38:23 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

/*#include <stdio.h>
int main()
{
	printf("%d",ft_strlen("Merhaba"));
}*/
