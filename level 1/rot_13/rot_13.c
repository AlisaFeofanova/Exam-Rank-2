#include <unistd.h>

void    rot_13(char *str)
{
    char    c;
    int     i;

    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
        {
            c = str[i] + 13;
            i++;
            write (1, &c, 1);   
        }
        else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
        {
            c = str[i] - 26 + 13;
            i++;
            write (1, &c, 1); 
        }
        else
            write (1, &str[i++], 1); 
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        rot_13(argv[1]);
    write(1, "\n", 1);
    return (0);
}
