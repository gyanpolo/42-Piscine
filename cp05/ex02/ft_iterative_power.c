/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:19:10 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/01 12:32:12 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;

	c = nb;
	if (power == 0)
		return (1);
	if (power <= 0)
		return (0);
	while (power > 1)
	{
		c *= nb;
		power--;
	}
	return (c);
}
