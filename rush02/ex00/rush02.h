#ifndef RUSH02_H
# define RUSH02_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int  length_dict(char *file);
void ft_putchar(char c);
void printnumb(char **arg);
void	clasnums(char *buf, char *nums, int c);
void openread(char **arg);

#endif