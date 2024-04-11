/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:21:00 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/25 12:23:44 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	cuenta;

	cuenta = 0;
	while (str[cuenta] != '\0')
	{
		if (str[cuenta] >= 'A' && str[cuenta] <= 'Z')
		{
			str[cuenta] = str[cuenta] + 32;
		}
		cuenta++;
	}
	return (str);
}
