/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:37:06 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/03 20:32:17 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	first_line(int x )
{
	int	b ;

	b = 1;
	while (x >= b)
	{
		if (b == 1)
		{
			ft_putchar('/');
		}
		else if (b < x)
		{
			ft_putchar('*');
		}
		else if (b == x)
		{
			ft_putchar('\\');
		}
		b++;
	}
}

void	last_line(int x )
{
	int	b;

	b = 1;
	while (x >= b)
	{
		if (b == 1)
		{
			ft_putchar('\\');
		}
		else if (b < x)
		{
			ft_putchar('*');
		}
		else if (b == x)
		{
			ft_putchar('/');
		}
		b++;
	}
}

void	between_lines(int x)
{
	int	b;

	b = 1;
	while (x >= b)
	{
		if (b == 1 || b == x)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		b++;
	}
}

void	rush(int x, int y )
{
	int	a;

	a = 1;
	while (y >= a)
	{
		if (a == 1)
		{
			first_line(x);
			ft_putchar('\n');
		}
		else if (y > a)
		{
			between_lines(x);
			ft_putchar('\n');
		}
		else
		{
			last_line(x);
		}
		a++;
	}
}
