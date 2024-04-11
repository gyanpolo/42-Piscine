/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paso1.2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:24:39 by gpolo             #+#    #+#             */
/*   Updated: 2024/03/30 16:36:51 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ps1_ver_d(char nr2, char nr4, char sr1, char sr2, char sr3, char sr4)
{	
	int	rith;
	
	ritth = 0
	c = 0;
	while ((nr4[c] != 4) && (nr4[c] != '\0'))
		c++;
	if (nr4[c] == 4)
	{
		if (c == 0)
			complet(rith,sr1);
		if (c == 1)
			complet(rith,sr2);
		if (c == 2)
			complet(rith,sr3);
		if (c == 3)
			complet(rith,sr4);
	}
}
