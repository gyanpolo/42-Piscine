/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:28:05 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/08 16:46:25 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	c;
	int	size1;

	c = 0;
	size = (max - min);
	size1 = (size);
	if (min >= max)
		return (0);
	*range = (int *)malloc ((size) * sizeof(int));
	while (size > 0)
	{
		(*range)[c++] = min++;
		size--;
	}
	return (size1);
}
/*int main(void)
{
	int min;
	int max;
	int size;
	int c = 0;
	max = 12;
	min = 8;
	int *dest;

	size = ft_ultimate_range(&dest, min, max);
	while (size-- > 0)	
		printf("%d ", dest[c++]);
		free(dest);
	return (0);
}*/
