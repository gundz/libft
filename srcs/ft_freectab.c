#include <stdlib.h>

void					ft_freectab(char **tab)
{
	int					i;

	i = 0;
	while (tab[i] != NULL)
		free(tab[i++]);
	free(tab);
}
