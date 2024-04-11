/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:12:02 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/28 09:35:00 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_2_char(int c1)
{
	int	decenas;
	int	unidades;

	if (c1 < 10)
	{
		print_char('0');
		print_char(c1 + '0');
	}
	else
	{
		decenas = c1 / 10;
		unidades = c1 % 10;
		print_char(decenas + '0');
		print_char(unidades + '0');
	}
}

void	ft_print_comb2(void)
{
	int	c1;
	int	c2;

	c1 = 0;
	while (c1 <= 99)
	{
		c2 = c1 + 1;
		while (c2 <= 99)
		{
			print_2_char(c1);
			print_char(' ');
			print_2_char(c2);
			if (c1 < 98)
			{
				print_char(',');
				print_char(' ');
			}
			c2++;
		}
		c1++;
	}
}
