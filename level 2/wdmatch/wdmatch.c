#include <unistd.h>


void	put_str(char *str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		wdmatch(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while(str1[i] && str2[j])
	{
		if (str1[i] == str2[j])
			i++;
		j++;
	}
	if(!str1[i])
        return(1);	
	return (0);
}


int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (wdmatch(argv[1], argv[2]))
			put_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}