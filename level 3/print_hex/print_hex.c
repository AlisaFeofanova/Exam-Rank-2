#include <unistd.h>

int	print_hex(int n)
{
	char *base;

	base = "0123456789abcdef";
	if (n > 16)
		print_hex(n/16);
	write (1, &base[n % 16], 1);
	return (0);
}

int	atoi(char *str)
{
	int	num;

	num = 0;
	while(*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

int	main(int argc, char  **argv)
{
	if (argc == 2)
	{
		print_hex(atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}