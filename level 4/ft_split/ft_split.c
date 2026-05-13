#include <stdlib.h>

int ft_strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

char **ft_split(char *str)
{
	char	**split;
	int		j;
	int		k;

	j = 0;
	split = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!split)
		return (NULL);

	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (!*str)
			break ;
		split[j] = malloc(sizeof(char) * (ft_strlen(str) + 1));
		k = 0;
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
		{
			split[j][k] = *str;
			str++;
			k++;
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}