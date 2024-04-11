/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:45:57 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/26 11:16:57 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		a;
	char	c;
	int		en_palabra;

	a = 0;
	en_palabra = 1;
	while (str[a] != '\0')
	{
		c = str[a];
		if (en_palabra == 1 && c >= 'a' && c <= 'z')
			str[a] = str[a] - 32;
		else if (en_palabra == 0 && c >= 'A' && c <= 'Z')
			str[a] = str[a] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			en_palabra = 1;
		else
			en_palabra = 0;
		a++;
	}
	return (str);
}
