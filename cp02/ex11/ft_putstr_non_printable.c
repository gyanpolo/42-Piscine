/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 09:13:13 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/04 13:18:18 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	gotoexa(unsigned char numd)
{
	char			*base;

	base = "0123456789abcdef";
	if (numd / 16 >= 0)
	{
		ft_putchar(base[numd / 16]);
		ft_putchar(base[numd % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(base[numd]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				c;
	unsigned char	numd;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] >= 127))
		{
			numd = str[c];
			ft_putchar('\\');
			gotoexa(numd);
		}
		else
			ft_putchar(str[c]);
		c++;
	}
}
