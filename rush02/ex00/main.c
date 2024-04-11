/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:56:42 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/06 13:16:30 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush02.h"
/*
int main (void)
{
  int narg = 2;
  char *arg[2];
  arg[1] = "123";
  openread(arg);
}
*/
int main (int narg, char **arg)
{
  if (narg == 2)
  {
    openread(arg);
  }
  return (0);
}
