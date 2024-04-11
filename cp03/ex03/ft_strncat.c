/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:19:36 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/26 16:48:11 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	c2;

	c = 0;
	c2 = 0;
	if (nb < 1)
	{
		return (dest);
	}
	while (dest[c] != '\0')
	{
		c++;
	}
	while ((src[c2] != '\0') && (c2 < nb))
	{
		dest[c] = src[c2];
		c++;
		c2++;
	}
	dest[c] = '\0';
	return (dest);
}
