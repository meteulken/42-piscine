/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:29:38 by mulken            #+#    #+#             */
/*   Updated: 2022/08/03 17:29:19 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	tut;
	int	cikar;

	if (nb < 0)
		return (0);
	tut = 0;
	cikar = 1;
	while (nb > 0)
	{
		nb -= cikar;
		cikar += 2;
		tut++;
	}
	if (nb == 0)
		return (tut);
	else
		return (0);
}

/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_sqrt(64));
	printf("%d\n",ft_sqrt(0));
	printf("%d\n",ft_sqrt(256));
	return 0;
}*/
