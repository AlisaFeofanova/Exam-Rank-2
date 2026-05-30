#include <unistd.h>

int	rotone(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i]){
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			if (str[i] == 'z' || str[i] == 'Z')
				c = str[i] - 25;
			else
				c = str[i] + 1;
		}
		else
			c = str[i];
		write(1, &c, 1);
		i++;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
