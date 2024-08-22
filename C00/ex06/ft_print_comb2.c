/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 00:47:28 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/20 01:11:52 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int number)
{
	char	a;
	char	b;

	a = number / 10 + '0';
	b = number % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print_number(x);
			write(1, " ", 1);
			print_number(y);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
