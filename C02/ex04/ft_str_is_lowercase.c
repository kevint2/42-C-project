/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:40:37 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/06 11:58:45 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
	{
	int	num ;
	int	num2;

	num = 0;
	num2 = 0;
	while (str[num] != '\0')
	{
		if (str[num] < 'a' || str[num] > 'z')
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

// int main()
// {
//     char *test1 = "hello";
//     char *test2 = "Hello";
//     char *test3 = "";
//     char *test4 = "world";
//     printf("Test 1: %s -> %d\n", test1, ft_str_is_lowercase(test1)); 
//     printf("Test 2: %s -> %d\n", test2, ft_str_is_lowercase(test2)); 
//     printf("Test 3: %s -> %d\n", test3, ft_str_is_lowercase(test3)); 
//     printf("Test 4: %s -> %d\n", test4, ft_str_is_lowercase(test4)); 
//     return 0;
// }