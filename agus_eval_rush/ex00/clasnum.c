/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clasnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:57:48 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/09 10:53:49 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void search(char *buf, char n, int n0)
{
  int c;
  int c2;
  
  c = 0;
  c2 = 0;
  while (buf[c])
  {
   if (buf[c] == n)
    {
      while (buf[c + 1 + c2] == '0')
        c2++;
      if (c2 == n0)
      {
        while (buf[c + c2] != ':')
         c2++;
        while ((buf[c + c2] == 32) || ((buf[c + c2] >= 9) && (buf[c + c2] <= 13)))
         c2++;
        while (buf[c + c2] != '\n')
        {
         ft_putchar(buf [c + c2]);
         c2++;
        }
      }
      else
        c2 = 0;
    }
  c++;
  }
}

void usebas(char *buf, char *basics, int c3)
{
  if (c3 == 1)
  {
     basics[2] = basics[0];
     basics[0] = 0;
  }
  if (c3 == 2)
  {
    basics[2] = basics[1];
    basics[1] = basics[0];
    basics[0] = 0;
  }
  if (basics[0] != '0')
  {
    search(buf, basics[0], 0);
    search(buf, '1', 2);
  }
  if (basics[1] != '0')
    search(buf, basics[1], 1);
  if (basics[2] != '0')
    search(buf, basics[1], 1);
}

void	clasnums(char *buf, char *nums, int c)
{
  int c2;
  int c3;
  char basics[3];
  
  ft_putchar(c + '0'); 
  c2 = 0;
  search(buf, '1', '1');
  while (c > 0)
  {
    while (0 != (c % 3))
    {
      c3 = 0; 
      basics[c3++] = nums[c2++];
      c--;
    }
    usebas(buf, basics, c3);
    search(buf, '1', c);
    c--;
  }
}

