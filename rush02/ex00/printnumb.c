/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:29:32 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/07 17:48:51 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void putnumb(char *nums, char **str)
 {
   int	c;
   int	sig;
   int	c2; 
   sig = 1;
   c = 0;
   c2 = 0;
   while ((str[1][c] == 32) || ((str[1][c] >= 9) && (str[1][c] <= 13)))
     c++;
   while ((str[1][c] == 45) || (str[1][c] == 43))
   {
     if (str[1][c] == 45)
       sig *= -1;
     c++;
   }
   while (str[1][c] >= 48 && str[1][c] <= 57)
   {
     nums[c2++] = str[1][c];
     c++;
   }
   nums[c2++] = '\0';
   if (sig < 0)
     write(1, "minus", 5);
   c = 0;
}

void gonumb(char *buf, char **arg)
{
  int  c;
  int c2;
  char *nums;

  c2 = 0; 
  c = 0;
  while (arg[1][c] != '\0')
    c++;
  nums = (char *)malloc(c * sizeof(char) + 1);
  putnumb(nums, arg);
  while (nums[c2] != '\0')
    c2++;
  clasnums(buf, nums, c2);
  free(nums);
}

void openread(char **arg)
{
  int  fd;
  int  totallenght;
  ssize_t  nr_bytes;
  char  *buf;
  
  
  totallenght = length_dict("numbers.dict");
  fd = open("number.dict", O_RDONLY);
  buf = (char *)malloc(totallenght * sizeof(char ) + 1);
  nr_bytes = read(fd, buf, totallenght);
  if (nr_bytes == 0)
  {
    write(1, "Archivo vacio\n", 14);

  }
  else
    gonumb(buf, arg);
  close(fd);
  free(buf);
}

