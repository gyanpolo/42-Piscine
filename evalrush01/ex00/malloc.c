
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char *str;
	int i;
	int j;

	str = malloc(sizeof(char) * strlen(av[1]) + 1);
	if (!str)
		return(NULL);
	i = 0;
	j = 0;
	while (av[1][j])
	{
		printf("j en la posicion -> %d es la letra %c\n", j, av[1][j]);
		str[i] = av[1][j];
		i++;
		j++;
	}
	printf("%s\n", str);
	free(str);
}
