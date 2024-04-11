/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:17:31 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/25 09:52:07 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	cuenta;

	cuenta = 0;
	while (src[cuenta] != '\0' )
	{
		dest[cuenta] = src[cuenta];
		cuenta++;
	}
	dest[cuenta] = '\0';
	return (dest);
}
