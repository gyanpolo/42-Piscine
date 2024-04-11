/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:53:41 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/25 11:58:52 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	comp;
	int	cuenta;
	int	cuenta2;

	cuenta = 0;
	cuenta2 = 0;
	while (str[cuenta] != '\0')
	{
		comp = str[cuenta];
		if (comp >= ' ' && comp <= '~')
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
