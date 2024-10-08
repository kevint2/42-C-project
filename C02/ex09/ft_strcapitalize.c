/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoska <ktoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:07:59 by ktoska            #+#    #+#             */
/*   Updated: 2024/08/20 22:07:10 by ktoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (((str[i - 1] < 'a' || str[i - 1] > 'z')
					&& (str[i - 1] < '0' || str[i - 1] > '9')
					&& (str[i - 1] < 'A' || str[i - 1] > 'Z'))
				|| i == 0)
			{
				str[i] -= 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && i != 0)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int main (void)
{
	char str [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}