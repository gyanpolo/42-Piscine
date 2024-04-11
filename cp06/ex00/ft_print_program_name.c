/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:44:45 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/02 09:07:46 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ca, char **arg)
{
	int	c;

	ca--;
	c = 0;
	while (arg[0][c] != '\0')
		ft_putchar(arg[0][c++]);
	ft_putchar('\n');
	return (0);
}
