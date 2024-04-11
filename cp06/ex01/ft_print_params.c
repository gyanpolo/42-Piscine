/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:58:16 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/01 12:10:51 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ca, char **arg)
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
	return (0);
}
