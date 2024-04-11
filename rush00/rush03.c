/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:22:47 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/23 19:34:53 by mgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	linea(int x, char iz, char medio, char der)
{
	int	espacio;

	espacio = 1;
	if (x > 0)
	{
		ft_putchar(iz);
	}
	while (espacio < (x - 1))
	{
		ft_putchar(medio);
		espacio++;
	}
	if (x > 1)
	{
		ft_putchar(der);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	espacio;	

	espacio = 1;
	if (x > 0 && y > 0)
	{
		linea(x, 'A', 'B', 'C');
	}
	while (espacio < y - 1 && x > 0)
	{
		linea(x, 'B', ' ', 'B');
		espacio++;
	}
	if (y > 1 && x > 0)
	{
		linea(x, 'A', 'B', 'C');
	}
}
