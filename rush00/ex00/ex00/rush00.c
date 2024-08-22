/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwacker <pwacker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:06:11 by pwacker           #+#    #+#             */
/*   Updated: 2024/08/04 14:08:29 by pwacker          ###   ########.fr       */
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
			ft_putchar('o');
		}
		else if (b < x)
		{
			ft_putchar('-');
		}
		else if (b == x)
		{
			ft_putchar('o');
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
			ft_putchar('o');
		}
		else if (b < x)
		{
			ft_putchar('-');
		}
		else if (b == x)
		{
			ft_putchar('o');
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
			ft_putchar('|');
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