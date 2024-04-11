/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:51:18 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/27 09:50:36 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	c2;

	c = 0;
	c2 = 0;
	if (to_find[c] == '\0')
	{
		return (str);
	}
	while (str[c] != '\0')
	{
		while (str[c + c2] == to_find[c2])
		{
			if (to_find[c2 + 1] == '\0')
			{
				return (str + c);
			}
			c2++;
		}
		c++;
		c2 = 0;
	}
	return (0);
}
