/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:28:03 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/20 01:09:49 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_multiple_char(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1 ;
			while (z <= '9')
			{
				if (x < y && y < z)
				{
					ft_write_multiple_char(x, y, z);
					if (x != '7' || y != '8' || z != '9')
						write(1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
