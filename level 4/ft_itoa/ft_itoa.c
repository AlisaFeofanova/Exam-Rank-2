#include <stdlib.h>

int     ft_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
    int     len;
    char    *res;

    len = ft_len(nbr);
    res = malloc(len + 1);
    if (!res)
        return (NULL);
    if (nbr == 0)
    {
		res[0] = '0';
		return (res);
	}
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    res[len] = '\0';
    len--;
    while (nbr)
    {
        res[len--] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    if (nbr > 0)
    {
        res[0] = nbr % 10 + '0';
    }
    return (res);
}