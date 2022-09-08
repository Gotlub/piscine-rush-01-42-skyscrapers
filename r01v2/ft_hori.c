extern int g_lensquare;

int ft_hori_2(int **table, int *perimeter, int y)
{
    int       i;
    int    temp;
    int    look;
    int    zero;

    i = g_lensquare - 1;
    temp = 0;
    look = 0;
    zero = 0;
    while (((g_lensquare - i) <= g_lensquare) && (zero == 0))
    {
        if ((table[y][i] != 0) && table[y][i] > temp)
        {
            temp = table[y][i];
            look++;
        }
        if (table[y][i] == 0)
            zero++; 
        i--;
    }
    if (((zero != 0) && (perimeter[y + g_lensquare * 3] >= look)) ||
        ((zero == 0) && (perimeter[y + g_lensquare * 3] == look)))
        return (1);
    return (0);
}

int ft_hori(int **table, int *perimeter, int y)
{
    int       i;
    int    temp;
    int    look;
    int    zero;

    i = 0;
    temp = 0;
    look = 0;
    zero = 0;
    while ((i < g_lensquare) && (zero == 0))
    {
        if ((table[y][i] != 0) && (table[y][i] > temp))
        {
            temp = table[y][i];
            look++;
        }
        if (table[y][i] == 0)
            zero++;
        i++;
    }
    if ((((zero != 0) && (perimeter[y+ g_lensquare * 2] >= look)) && (ft_hori_2(table, perimeter, y) != 0))
        || ((zero == 0) && (look == perimeter[y+ g_lensquare * 2]) && (ft_hori_2(table, perimeter, y) != 0)))
            return (1);
    return (0);
}