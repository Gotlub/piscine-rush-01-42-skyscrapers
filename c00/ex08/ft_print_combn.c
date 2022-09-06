#include <unistd.h>

void    ft_recur(int rank, int nb, int *a)
{
    int        i;
    char    temp;

    a[rank + 1] = a[rank] + 1;
    while (a[rank + 1] <= 10 - nb + rank)
    {
        if (rank + 1 < nb)
            ft_recur(rank + 1, nb, a);
        if (rank + 1 == nb)
        {
            i = 0;
            while (++i <= nb)
            {
                temp = a[i] + '0';
                write(1, &temp, 1);
            }
        }
        if ((a[1] < 10 - nb) && (rank + 1 == nb))
                    write(1, ", ", 2);
        a[rank + 1] += 1;
    }
}

void    ft_print_combn(int n)
{
    int a[11];

    a[0] = - 1;
    ft_recur(0, n, a); 
}
