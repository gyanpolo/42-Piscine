/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:22:27 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/31 17:53:05 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void completcube(int cube[4][4], int crules[6][6]);

void comprules(char *rules, int crules[6][6])
{
	int	space;
	int	c;

	c = 0;
	space = 1;
	while (space != 5)
	{
		crules[0][space] = (rules[c] - '0');
		space++;
		c++;
	}
	space = 1;
	while (space != 5)
	{
		crules[5][space] = (rules[c] - '0');
		space++;
		c++;
	}
}
void comprules2(char *rules, int crules[6][6])
{
	int	space;
	int	c;

	space = 1;
	c = 8;
	while (space != 5)
	{
		crules[space][0] = (rules[c] - '0');
		space++;
		c++;
	}
	space = 1;
	while (space != 5)
	{
		crules[space][5] = (rules[c] - '0');
		space++;
		c++;
	}
}
void  whitnospace(char *rules, int crules[6][6])
{
	char *str;
	int c;
	int c2;

	c2 = 0;
	c = 0;
	str = malloc(17);
	while (rules[c] != '\0')
	{
		if (rules[c] != ' ')
			str[c2++] = rules[c];
		c++;
	}
	str[c2] = '\0';
	comprules(str, crules);
	comprules2(str, crules);
	free(str);
}
void skyscraper(int cube[4][4], char *rules)
{
	int crules[6][6];

	whitnospace(rules, crules);
	completcube(cube, crules);
}
