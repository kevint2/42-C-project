/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:37:41 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/04 20:23:28 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr( char *str)
{
	int		num;

	num = 0;
	while (str[num] != '\0')
	{
		write(1, &str[num], 1);
		num++;
	}
}

// int	main(void)
// {
// 	char	strings [6];

// 	strings = "kevin";
// 	ft_putstr(strings);
// }
