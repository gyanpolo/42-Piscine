/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:28:10 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/03 12:09:47 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*totaleng(int size, char **strs, char *sep)
{
	int		ct;
	int		x;
	int		y;
	char	*result;

	ct = 0;
	x = 0;
	y = 0;
	while (size > y)
	{
		while (strs[y][x] != '\0')
		{
			ct++;
			x++;
		}
		x = 0;
		y++;
	}
	while (sep[x++] != '\0')
		x++;
	ct += x * (size - 1);
	result = (char *)malloc((sizeof(char) * ct + 1));
	if (result == NULL)
		return (NULL);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		c;
	int		y;
	int		x;

	result = totaleng(size, strs, sep);
	if (result == NULL)
		return (0);
	x = 0;
	y = 0;
	c = 0;
	while (size > y)
	{
		while (strs[y][x] != '\0')
			result[c++] = strs[y][x++];
		x = 0;
		if (y < (size - 1))
			while (sep[x] != '\0')
				result[c++] = sep[x++];
		x = 0;
		y++;
	}
	result[c] = '\0';
	return (result);
}

/*int main(void)
{
	int size = 3;
	char *dest[3];
	char *sep;
	char *trudest;

	sep = " |  " ;
	dest[0] = "hola";
	dest[1] = "paco";
	dest[2] = "bonito";
	trudest = ft_strjoin(size ,dest, sep);
	while (size-- > 0)
		printf("%s\n", trudest);
	free(trudest);
	return (0);
}*/
