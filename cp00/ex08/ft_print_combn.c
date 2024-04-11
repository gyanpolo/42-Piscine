/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:42:30 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/03 16:36:32 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *nums, int n)
{
	int	c;
	int	posible;

	c = 1;
	posible = 1;
	while (c < n)
	{
		if (nums[c - 1] >= nums[c])
			posible = 0;
		c++;
	}
	if (posible != 0)
	{
		c = 0;
		while (c < n)
			ft_putchar(nums[c++] + '0');
		if (nums[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	c;
	int	num[10];

	c = 0;
	while (c < n)
		num[c++] = 0;
	while (num[0] <= (10 - n) && (n >= 1) && (n < 10))
	{
		print(num, n);
		num[n - 1]++;
		c = n - 1;
		while ((c != 0) && (n > 1))
		{
			if (num[c] > 9)
			{
				num[c - 1]++;
				num[c] = 0;
			}
			c--;
		}
	}
}
/*int	main()
{
	ft_print_combn(0);
}*/
