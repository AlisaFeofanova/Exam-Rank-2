int	    is_power_of_2(unsigned int n)
{
    if (n % 2 == 0)
    {
        while (n > 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                return (0);
        }
    }
    if (n == 1)
        return (1);
    return (0);
}