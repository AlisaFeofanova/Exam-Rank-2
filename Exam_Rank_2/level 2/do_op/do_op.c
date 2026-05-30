#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int do_op(char *num1, char *op, char *num2)
{
    int nbr1;
    int nbr2;
    int res;

    nbr1 = atoi(num1);
    nbr2 = atoi(num2);
    res = 0;
    if (*op == '+')
        res = nbr1 + nbr2;
    else if (*op == '-')
        res = nbr1 - nbr2;
    else if (*op == '*')
        res = nbr1 * nbr2;
    else if (*op == '/')
        res = nbr1 / nbr2;
    else if (*op == '%')
        res = nbr1 % nbr2;
    return (res);
}


int main(int argc, char **argv)
{
    if (argc == 4)
        printf("%d\n", do_op(argv[1], argv[2], argv[3]));
    else
        write(1, "\n", 1);
    return (0);
}