/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:32:14 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/24 11:27:33 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	impcomb(char a, char b, char c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)

{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				impcomb(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

/*int main()
{
	combo();
	return 0;
}
*/
