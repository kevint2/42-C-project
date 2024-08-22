/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:17:37 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/20 12:11:14 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill_join(char *join, int size, char **strs, char *sep)
{
	char	*str;
	char	*sp;
	int		i;

	i = 0;
	while (i < size)
	{
		str = strs[i];
		sp = sep;
		while (*str != '\0')
			*(join++) = *(str++);
		if (i != size - 1)
		{
			while (*sp != '\0')
				*(join++) = *(sp++);
		}
		i++;
	}
	*join = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		tot_size;
	int		i;

	tot_size = 0;
	i = 0;
	while (i < size)
	{
		ret = strs[i++];
		while (*(ret++) != '\0')
			tot_size++;
	}
	if (size == 0)
	{
		ret = malloc(1);
		*ret = '\0';
		return (ret);
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	ret = malloc(tot_size + i * (size - 1) + 1);
	fill_join(ret, size, strs, sep);
	return (ret);
}

// #include <stdio.h>

// int main(void)
// {
//     char *strs[] = {"Hello", "world", "from", "C"};
//     char *sep = " ";
//     char *result = ft_strjoin(4, strs, sep);
//     printf("%s\n", result);
//     free(result);
//     return 0;
// }
