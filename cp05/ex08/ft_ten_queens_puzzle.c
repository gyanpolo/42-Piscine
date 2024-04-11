/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:38:42 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/11 15:05:18 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void	ft_print(int *tabla)
{
	int x;

	x = 0;
	while (x <10)
		ft_putchar(tabla[x++] + '0');
}

void taboff(char tablero[10][10])
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (y < 10)
    {
        while (x < 10)
            tablero[y][x++] = 0;
        x = 0;
        y++;
    }
}

void print(char tablero[10][10])
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (y < 10)
    {
        while (x < 10)
            ft_putchar(tablero[y][x++] + '0' );
        ft_putchar('\n');
		x = 0;
        y++;
    }
}
int posible(int x, int y,char tablero[10][10])
{
	int c;
	int x2;
	int y2;

	c = 0;
	y2 = 0;
	x2 = 0;
	while (x2 < 10)
		c += tablero[y][x2++];
	while (((y + y2) <= 10) && ((x + x2) <= 10))
	{
		c += tablero[y + y2][x + x2];
		y2++;
		x2++;
	}
	y2 = 0;
	x2 = 0;
	while (((y + y2) >= 0) && ((x + x2) >= 0))
    {
        c += tablero[y + y2][x + x2];
        y2--;
        x2--;
    }
	y2 = 0;
    x2 = 0;
	while (((y + y2) >= 0) && ((x + x2) <= 10))
	{
        c += tablero[y + y2][x + x2];
        y2--;
        x2++;
    }
	y2 = 0;
    x2 = 0;
    while (((y + y2) <= 10) && ((x + x2) >= 0))
    {
        c += tablero[y + y2][x + x2];
        y2++;
        x2--;
    }
	y2 = 0;
    x2 = 0;
	if (c == 0)
		return (1);
	else 
		return (0);
	
}
void putquen(int x, int y, char tablero[10][10])
{
	int pos;
	int tabla[10];
	int c;
	int c2;

	c2 = 0;
	while (c2 <10)
		tabla[c2++] = 0;
	c = 0;
	y = 0;
	x = 0;
	pos = 0;
	while ( x < 10)
	{
		y = 0;
		while (y < 10)
		{
			pos = posible(x, y, tablero);
			if (pos == 0)
			{
				y++;
			}
			else
			{
				tablero[y][x] = 1;
				tabla[c] = y;
				y = 11;
				ft_putchar('\n');
				ft_print(tabla);
				ft_putchar('\n');
				print(tablero);
			}
			if (y == 10)
			{
				y = tabla[c - 1];
				x--;
				tablero[y][x] = 0;
				y++;
				c--;
			}
			ft_putchar('x');
            ft_putchar(' ');
            ft_putchar( x + '0');
            ft_putchar('\n');
			ft_putchar('y');
			ft_putchar(' ');
			ft_putchar( y + '0');
			ft_putchar('\n');
		}
	ft_putchar('x');
	ft_putchar(' ');
	ft_putchar( x + '0');
	ft_putchar('\n');
	c++;
	x++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char tablero[10][10];
	int x;
	int y;
	
	x = 0;
	y = 0;
	taboff(tablero);
	putquen(x, y, tablero);
	print(tablero);
	return (0);
}

int main (void)
{
	ft_ten_queens_puzzle();
	return (0);
}
