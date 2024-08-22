/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:46:43 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/20 12:01:57 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && *src != '\0')
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	while (*src)
	{
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}
