/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwacker <pwacker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:37:06 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/04 14:13:28 by pwacker          ###   ########.fr       */
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
			ft_putchar('A');
		}
		else if (b < x)
		{
			ft_putchar('B');
		}
		else if (b == x)
		{
			ft_putchar('C');
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
			ft_putchar('A');
		}
		else if (b < x)
		{
			ft_putchar('B');
		}
		else if (b == x)
		{
			ft_putchar('C');
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
			ft_putchar('B');
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
