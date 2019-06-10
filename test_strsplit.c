#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	str[] = ",apple,,orange,banana,";
	char	dlm = ',';
	char	**dstr = NULL;
	size_t	i = 0;

	dstr = ft_strsplit(str, dlm);

	while (dstr[i])
	{
		printf("%s\n", dstr[i]);
		i++;
	}

	return (0);
}
