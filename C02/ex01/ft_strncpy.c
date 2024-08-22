/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:00:38 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/07 16:12:40 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (num < n && src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}
