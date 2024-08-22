/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:56:08 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/18 16:40:11 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	ptr = malloc((max - min) * sizeof(int));
	if (ptr != NULL)
	{
		while (min < max)
		{
			ptr[i] = min;
			i++;
			min++;
		}
		return (ptr);
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     int min = -5;
//     int max = 10;
//     int *range;
//     int i;

//     range = ft_range(min, max);
//     if (range == NULL)
//     {
//         printf("Range is NULL\n");
//         return 1;
//     }

//     for (i = 0; i < max - min; i++)
//     {
//         printf("%d ", range[i]);
//     }
//     printf("\n");

//     free(range);
//     return 0;
// }