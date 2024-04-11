/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:47:38 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/08 13:43:41 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	num;

	if (nb <= 2)
		return (2);
	num = (nb - 1);
	while ((nb % num) != 0)
		num--;
	if (num == 1)
		return (nb);
	else
	{
		while (nb != num)
		{
			num = 2;
			while ((nb % num) != 0)
				num++;
			if (nb == num)
				return (nb);
			nb++;
		}
	}
	return (0);
}
