/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:36:49 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/28 09:37:42 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	div(int c)
{
	int	div;

	div = 1;
	while (c != 0)
	{
		div = div * 10;
		c--;
	}
	return (div);
}

int	ca(int nb)
{
	int	c;

	c = 0;
	while (nb >= 10)
	{
		nb = (nb / 10);
		c++;
	}
	return (c);
}

void	cc(int c, int nb)
{
	int	cn;
	int	a;

	cn = 0;
	a = (div(c));
	while (a != 1)
	{
		cn = (nb / a);
		nb = (nb % a);
		a = (a / 10);
		cn = (cn + '0');
		ft_putchar(cn);
	}
	if (a == 1)
	{
		nb = nb + '0';
		ft_putchar(nb);
	}
}

void	ft_putnbr(int nb)
{
	int	c;

	c = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 0)
	{
		c = (ca(nb));
		cc(c, nb);
	}
}
