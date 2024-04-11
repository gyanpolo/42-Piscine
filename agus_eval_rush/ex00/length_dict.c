/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:02:51 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/09 11:12:50 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	length_dict(char *file)
{
  int		counter;
  char	caracter;
  int		fd;

  counter = 0;
  fd = open(file, O_RDONLY);
  if (fd == -1)
  {
    write(1, "Error\n", 6);
    return (0);
  }
  while (read(fd, &caracter, 1) == 1)
  	count++;
	close(fd);
  return (counter);
}
