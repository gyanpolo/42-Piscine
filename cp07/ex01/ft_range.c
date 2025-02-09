/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:15:53 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/08 16:46:53 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*nums;
	int	c;

	c = 0;
	size = (max - min);
	if (min >= max)
		return (0);
	nums = (int *)malloc ((size + 1) * sizeof(int));
	while (size > 0)
	{
		nums[c++] = min++;
		size--;
	}
	nums[c] = '\0';
	return (nums);
}
/*int main(void)
{
	int min;
	int max;
	int c = 0;

	max = 12;
	min = 8;
	int *dest;

	dest = ft_range(min ,max);
 	while (min++ < max)
		printf("%d ", dest[c++]);
	return (0);
	free(dest);
}*/
