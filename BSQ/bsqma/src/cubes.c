/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cubes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:11:19 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/10 17:34:38 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"
#include <stdio.h>

int	isposibelx (int *posxy, char **map, char *rules)
{
	int x;
	int c;

	posxy[2] = posxy[1];
	posxy[5] = posxy[4];
	c = 1;
	x = posxy[1] - posxy[0] + 1;
	while ((map[posxy[5]][posxy[2 + 1]] != rules[1]) || (c != x) || (map[posxy[5]][posxy[2 + 1]] != '\0'))
	{
		c++;
		posxy[5] += 1;
		if (map[posxy[5]][posxy[2 + 1]] != rules[1])
			return (0);
		if (map[posxy[5 + 1]][posxy[2]] != '\0')
			return (0);
	}
	c = 1;
	while ((map[posxy[5 + 1]][posxy[2]] != rules[1]) || (c != x) || (map[posxy[5 + 1]][posxy[2]] != '\0'))
	{
		c++;
		posxy[2] -= 1;
		if (map[posxy[5 + 1]][posxy[2]] != rules[1])
			return (0);
		if (map[posxy[5]][posxy[2 + 1]] != '\0')
            return (0);
	}
	return (1);
}		

void	cmaxcube(int *maxcube, int *posxy)
{
	int tmax;

	tmax = (posxy[1] - posxy[0]) * (posxy[1] - posxy[0]);
	if (tmax > maxcube[0])
	{
		maxcube[0] = tmax;
		maxcube[1] = posxy[0];
		maxcube[2] = posxy[3];
		maxcube[3] = posxy[1];
		maxcube[4] = posxy[4];
	}
}

void	makemaxcube(int *posxy, int *maxcube, char **map, char *rules)
{
	int	posibelx;
	int	posibely;

	posibelx = 1;
	posibely = 1;
	posxy[1] = posxy[0];
	posxy[4] = posxy[3];
	while (posibelx == 1)
		{
			posibelx = isposibelx(posxy, map, rules);
			if (posibelx == 1)
				posxy[1] +=1;
		}
	cmaxcube(maxcube, posxy);
}

void	maxcubepos(char *rules, char **map)
{
	int posxy[6];
	int	maxcube[5];
	int	i;

	i = 0;
	while (i < 6)
		posxy[i++] = 0;
	i = 0;
	while (i < 5)
		maxcube[i++] = 0;
	while (map[posxy[3]] != NULL)
	{
		while (map[posxy[3]][posxy[0]] != '\0')
		{
			makemaxcube(posxy, maxcube, map, rules);
			posxy[0] += 1;
 		}
		posxy[0] = 0;
		posxy[3] +=1;
	}
	for (int i = 0; i < 6; i++)
		printf("posxy[%d] %d\n", i, posxy[i]);
	for (int i = 0; i < 5; i++)
		printf("maxcube[%d] %d\n", i, maxcube[i]);
	printf("Rules %s\n", rules);
	printthecube(rules, map, maxcube);
	printcube(map);
}

