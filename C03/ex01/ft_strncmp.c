/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:50:50 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/08 12:52:36 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while ((s1[num] != '\0' || s2[num] != '\0')
		&& num < n)
	{
		if (s1[num] != s2[num])
		{
			return (s1[num] - s2[num]);
		}
		num++;
	}
	return (0);
}
