/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:48:48 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/25 11:50:31 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	comp;
	int	cuenta;
	int	cuenta2;

	cuenta = 0;
	cuenta2 = 0;
	while (str[cuenta] != '\0')
	{
		comp = str[cuenta];
		if (comp >= 'A' && comp <= 'Z')
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
