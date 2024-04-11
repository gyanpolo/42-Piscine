/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:57:03 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/25 10:17:22 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cuenta;

	cuenta = 0;
	while (src[cuenta] != '\0' && cuenta < n)
	{
		dest[cuenta] = src[cuenta];
		cuenta++;
	}
	while (cuenta < n)
	{
		dest[cuenta] = '\0';
		cuenta++;
	}
	return (dest);
}
