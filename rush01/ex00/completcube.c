/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   completcube.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:08:35 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/31 17:26:04 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void 	completcube0(int cube[4][4])
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (y != 4)
    {
        while(x != 4)
            cube[y][x++] = 0;
    y++;
	}
}
void	step1(int cube[4][4], int rules[6][6]);

void	printcube(int cube[4][4]);

void	completcube(int cube[4][4], int rules[6][6])
{
	int x;
	int y;
	
	x = 0;
	y = 0;
	while (y != 6)
	{
		while(x != 6)
			rules[y][x++] = 0;
	y++;
	}
	completcube0(cube);
	step1(cube, rules);
	printcube(cube);
}
