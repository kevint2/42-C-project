/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:32:22 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/04 20:46:24 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

// int	main(void)
// {
// 	char	strings [6] = "kevin";

// 	printf("%d", ft_strlen(strings));
// 	return (0);
// }
