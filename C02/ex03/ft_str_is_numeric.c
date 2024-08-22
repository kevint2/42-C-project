/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:14:32 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/07 16:26:37 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] < 48 || str[num] > 57)
		{
			return (0);
		}
		num++;
	}
	return (1);
}

// int main()
// {
//     char *test1 = "12345";
//     char *test2 = "123a45";
//     char *test3 = "";
//     char *test4 = "9876543210"; 
//     printf("Test 1: %s -> %d\n", test1, ft_str_is_numer(test1));
//     printf("Test 2: %s -> %d\n", test2, ft_str_is_numer(test2));
//     printf("Test 3: %s -> %d\n", test3, ft_str_is_numer(test3)); 
//     printf("Test 4: %s -> %d\n", test4, ft_str_is_numer(test4));
//     return 0;
// }