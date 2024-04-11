/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:26:17 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/25 11:45:53 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	comp;
	int	cuenta;
	int	cuenta2;

	cuenta = 0;
	cuenta2 = 0;
	while (str[cuenta] != '\0')
	{
		comp = str[cuenta];
		if (comp >= 'a' && comp <= 'z' )
		{
			cuenta2++;
		}
		cuenta++;
	}
	if (cuenta == cuenta2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
