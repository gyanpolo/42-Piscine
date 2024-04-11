/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paso_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:24:06 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/31 15:44:10 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void 	complet(int n, int *cubo)
{
	int c;
	int c2;
	
	c = 0;
	if (n == 1)
	{
		c2 = 1;
		while (c != 4)
		{
			cubo[3][c] = c2
			c++;
			c2++;
		}
	c = 0;
	if (n == 0)
	{
		c2 = 4;
		while (c != 4)
		{
			cubo[0][c] = c2
			c++;
			c2--;
		}
	}
}

void	paso1_hor(char nr1, char nr3, char sr1, char sr2, char sr3, char sr4)
{
	int c;

	c = 0;
	while ((nr1[c] != 4) && (nr1[c] != '\0'))
		c++;
	if (str1[c] == 4);
	{
		str1[c] = 1;
		str2[c] = 2;
		str3[c] = 3;
		str4[c] = 4;
	}
	c = 0;
	while ((nr3[c] != 4) && (nr3[c] != '\0'))
		c++;
	if (nr3[c] == 4);
	{
		str1[c] = 4;
		str2[c] = 3;
		str3[c] = 2;
		str4[c] = 1;
	}
}

void	pas1_ver_d(char nr2, char nr4, char sr1, char sr2, char sr3, char sr4)
{
	int	c;
 	int	left;;

	left = 1;
	c = 0;
	while ((nr2[c] != 4) && (nr2[c] != '\0'))
		c++;
	if (nr2[c] == 4)
	{
		if (c == 0)
			complet(left,sr1);
		if (c == 1)
			complet(left,sr2);
		if (c == 2)
			complet(left,sr3);
		if (c == 3)
			complet(left,sr4);
	}
	c = 0;
}
void	paso2_horizontal(char norma1, char norma3, char str1, char str4 )
{
	int c;

	c = 0;
	while ((norma1[c] != 1) && (norma1[c] != '\0'))
		c++;
	if (norma1[c] == 1)
		srt1[c] = 4;
	c = 0;
	while ((norma3[c] != 1) && (norma3[c] != '\0'))
		c++;
	if (norma3[c] == 1)
		srt4[c] = 4
}
void	paso2_verical(char norma2, char norma4, char str2, char str3)
{
	int c;

	c = 0;
	while ((norma2[c] != 1) && (norma2[c] != '\0'))
		c++;
	if (c = 1)
		str2[3] = 4;
	if (c = 2)
		str3[3] = 4;
	c = 0;
	while ((norma4[c] != 1) && (norma4[c] != '\0'))
		c++;
	if (c = 1)
		str2[0] = 4;
	if (c = 2)
		str3[0] = 4;
}
