/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:26:07 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/07 12:44:20 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] >= 'a' && str[num] <= 'z')
		{
			str[num] = str[num] -32;
		}
		str[num] = str[num];
		num++;
	}
	return (str);
}

// int main() {
//     char str[] = "hello, World!";
//     printf("Original: %s\n", str);
//     printf("Uppercase: %s\n", ft_strupcase(str));
//     return 0;
// }