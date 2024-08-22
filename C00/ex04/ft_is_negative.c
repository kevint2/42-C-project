/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:56:06 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/01 21:06:35 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	if (n < 0)
	{
		letter = 'N';
		write(1, &letter, 1);
	}
	else
	{
		letter = 'P';
		write(1, &letter, 1);
	}
}
