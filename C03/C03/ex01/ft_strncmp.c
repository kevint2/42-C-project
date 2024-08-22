/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avampiro <avampiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:47:15 by avampiro          #+#    #+#             */
/*   Updated: 2024/08/21 10:39:39 by avampiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)

{
	while (n--)
	{
		if (*s1 != *s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		if (*s1 == '\0')
		{
			break ;
		}
		s1++;
		s2++;
	}
	return (0);
}
