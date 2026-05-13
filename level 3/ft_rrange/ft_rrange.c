#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int     *res;
    int     i;
    int     len;

    i = 0;
    if (start <= end)
          len = end - start + 1;
    else
         len = start - end + 1;
    res = malloc(sizeof(int) * len);
    if (!res)
        return (NULL);
    while (i < len)
    {
        res[i] = end;
        if (start < end)
            end--;
        else if (start > end)
            end++;
        i++;
    }
    return (res);
}
