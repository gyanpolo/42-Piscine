/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:01:05 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/25 12:20:05 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	cuenta;

	cuenta = 0;
	while (str[cuenta] != '\0')
	{
		if (str[cuenta] >= 'a' && str[cuenta] <= 'z')
		{
			str[cuenta] = str[cuenta] - 32;
		}
		cuenta++;
	}
	return (str);
}
