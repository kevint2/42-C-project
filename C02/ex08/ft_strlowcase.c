/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:15:03 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/07 16:36:44 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] >= 'A' && str[num] <= 'Z')
		{
			str[num] = str[num] +32;
		}
		str[num] = str[num];
		num++;
	}
	return (str);
}

// int main() {
//     char str[] = "hello, World!";
//     printf("Original: %s\n", str);
//     printf("Uppercase: %s\n", ft_strlowercase(str));
//     return 0;
// }