/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:00:00 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/18 14:47:41 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (dest != NULL)
	{
		while (*src != '\0')
		{
			*dest = *src;
			src ++;
			dest++;
		}
		*dest = '\0';
		return (dest - i);
	}
	return (NULL);
}
