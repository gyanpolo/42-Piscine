/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:42:28 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/01 17:55:55 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putarg(int ca, char **arg)
{
	int	c;
	int	c2;

	c2 = 1;
	while (c2 != ca)
	{
		c = 0;
		while (arg[c2][c] != '\0')
			ft_putchar(arg[c2][c++]);
		ft_putchar('\n');
		c2++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
		c++;
	return (s1[c] - s2[c]);
}

void	ordenargs(int ca, char **arg)
{
	int		c;
	int		c2;
	char	*swap;
	int		major;

	c = 2;
	while (c < ca)
	{
		c2 = c;
		major = 1;
		while ((c2 > 1) && (major >= 0))
		{
			major = ft_strcmp(arg[c2 - 1], arg[c2]);
			if (major > 0)
			{
				swap = arg[c2];
				arg[c2] = arg[c2 -1];
				arg[c2 -1] = swap;
			}
			else
				break ;
			c2--;
		}
		c++;
	}
}

int	main(int ca, char **arg)
{
	ordenargs(ca, arg);
	putarg(ca, arg);
	return (0);
}
