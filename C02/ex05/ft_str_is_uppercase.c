/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:58:29 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/07 16:34:30 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	num ;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] < 'A' || str[num] > 'Z')
		{
			return (0);
		}
		num++;
	}
	return (1);
}

// int main() {
//     char str1[] = "HELLO";
//     char str2[] = "Hello";
//     char str3[] = "";
//     printf("Is '%s' uppercase? %d\n", str1, ft_is_uppercase(str1)); 
//     printf("Is '%s' uppercase? %d\n", str2, ft_is_uppercase(str2)); 
//     printf("Is '%s' uppercase? %d\n", str3, ft_is_uppercase(str3));
//     return 0;
// }