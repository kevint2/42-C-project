/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avampiro <avampiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:23:56 by avampiro          #+#    #+#             */
/*   Updated: 2024/08/21 10:39:12 by avampiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
