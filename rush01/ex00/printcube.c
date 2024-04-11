/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printcube.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:57:25 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/31 18:00:19 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void    printcube(int cube[4][4])

{
	int x;
	int y;

	y = 0;
	while (y != 4)
	{
		x = 0;
		while(x != 4)
			ft_putchar(cube[y][x++] + '0');
		ft_putchar('\n');
	y++;
	}
}
