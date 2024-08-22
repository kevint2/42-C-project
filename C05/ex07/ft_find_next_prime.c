/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:59:31 by algebert          #+#    #+#             */
/*   Updated: 2024/08/22 12:35:53 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	while (1)
	{
		if (nb == 2)
			return (2);
		if (nb % 2 == 0)
			nb++;
		else
		{
			i = 3;
			while (i * i <= nb)
			{
				if (nb % i == 0)
					break ;
				i += 2;
			}
			if (i * i > nb)
				return (nb);
			nb += 2;
		}
	}
}
#include <stdio.h>

int main (void)
{
	printf("%d" , ft_find_next_prime(__INT_MAX__ + 10));
}
