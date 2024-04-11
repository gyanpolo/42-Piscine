/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:00:16 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/03 17:50:39 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	capacidad;
	unsigned int	cuenta;

	capacidad = 0;
	cuenta = 0;
	while (src[capacidad] != '\0')
	{
		capacidad++;
	}
	if (size < 1)
		return (capacidad);
	while (src[cuenta] != '\0' && size - 1 > 0)
	{
		dest[cuenta] = src[cuenta];
		cuenta++;
		size--;
	}
	dest[cuenta] = '\0';
	return (capacidad);
}
