/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:30:10 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/19 15:24:23 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range != NULL)
	{
		i = 0;
		while (i < max - min)
		{
			(*range)[i] = min + i;
			i++;
		}
		return (max - min);
	}
	return (-1);
}

// int	main(void)
// {
// 	int	*range;
// 	int	size;
// 	int	i;

// 	size = ft_ultimate_range(&range, 260, 1000);
// 	if (size == -1)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	else if (size == 0)
// 	{
// 		printf("Invalid range\n");
// 		return (1);
// 	}
// 	printf("Range size: %d\n", size);
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	printf("\n");
// 	free(range);
// 	return (0);
// }