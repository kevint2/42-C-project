/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:08:23 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/06 16:55:03 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	num;
	int	num2;

	num = 0;
	num2 = 0;
	while (str[num] != '\0')
	{
		if (str[num] < 32 || str[num] > 126)
		{
			num2++;
		}
		num++;
	}
	if (num2 != 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

// int main() {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello\nWorld";
//     char str3[] = "Printable123";
//     char str4[] = "";
//     printf("Is '%s' printable? %d\n", str1, ft_str_is_printable(str1));
//     printf("Is '%s' printable? %d\n", str2, ft_str_is_printable(str2)); 
//     printf("Is '%s' printable? %d\n", str3, ft_str_is_printable(str3));
//     printf("Is '%s' printable? %d\n", str4, ft_str_is_printable(str4)); 
//     return 0;
// }