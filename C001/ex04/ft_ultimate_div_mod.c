/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:24:36 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/04 22:19:53 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	moduluse;

	division = (*a / *b);
	moduluse = (*a % *b);
	*a = division;
	*b = moduluse;
}
