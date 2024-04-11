/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:57:42 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/31 18:00:44 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void putnum_4(int cube[4][4], int x, int y)
{
	int n;

	n = 1;
	if ((x <= 5) && (y == 0))
	{
		while (y != 4)
		{
			cube[y++][x-1] = n;
			n++;
		}
	}
	else if ((x == 5) && (y <= 5))
	{
		x -= 2;
		while (x != 0)
		{
			cube[y-1][x--]	= n;
			n++;
		}
	}
}

void putnum_4_2(int cube[4][4], int x, int y)
{
	int n;

	n = 1;
	if ((x <= 5) && (y == 5))
	{
		y -= 2;
		while (y >= 0)
		{
			cube[y--][x-1] = n;
			n++;
		}
	}
	else if ((x == 0) && (y <= 5))
	{
		while (x != 4)
		{
			cube[y-1][x++] = n;
			n++;
		}
	}
}

void step1(int cube[4][4], int crules[6][6])
{
	int c;
	int x;
	int y;

	y = 0;
	x = 0;
	c = 1; 
	while (crules[y][x] != 4 && c != 0)
	{
		while (x != 5)
			x++;
		while (y != 5)
			y++;
		while (x != 0)
			x--;
		while (y != 0)
			y--;
		c--;
	}
	putnum_4(cube, x, y);
    putnum_4_2(cube, x, y);
}

