#include <unistd.h>

void    put_nbr(int nbr)
{
    char    *dec;

    dec = "0123456789";
    if (nbr > 9)
        put_nbr(nbr/10);
    write(1, &dec[nbr%10], 1);
}


void    fizzbuzz()
{
    int     i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            put_nbr(i);
        i++;
        write(1, "\n", 1);
    }
}

int     main()
{
    fizzbuzz();
    return (0);
}