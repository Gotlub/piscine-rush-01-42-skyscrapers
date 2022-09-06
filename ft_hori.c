extern int g_lensquare;

int ft_hori_2(int **table, int *perimeter, int y)
{
    int       i;
    int    temp;
    int    look;

    i = g_lensquare - 1;
    temp = 0;
    look = 0;
    while ((g_lensquare - i) <= g_lensquare) 
    {
        if (table[y][i] == 0)
        {
            return (1);
        }
        else if (table[y][i] > temp)
        {
            temp = table[y][i];
            look++;
        }
        i--;
    }
    if (perimeter[y + g_lensquare * 3] == look)
        return (1);
    return (0);
}

int ft_hori(int **table, int *perimeter, int y)
{
    int       i;
    int    temp;
    int    look;

    i = - 1;
    temp = 0;
    look = 0;
    while (++i < g_lensquare) 
    {
        if (table[y][i] == 0)
        {
            if (ft_hori_2(table, perimeter, y) != 0)
                return (1);
        }
        else if (table[y][i] > temp)
        {
            temp = table[y][i];
            look++;
        }
    }
    if (perimeter[y+ g_lensquare * 2] == look)
        if (ft_hori_2(table, perimeter, y) != 0)
            return (1);
    return (0);
}