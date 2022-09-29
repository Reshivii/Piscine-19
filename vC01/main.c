#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	nbr1;
	int	nbr2;
	int	temp;

	nbr1 = 0;
	while (nbr1 < size)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 < size)
		{
			if (tab[nbr1] > tab[nbr2])
			{
				temp = tab[nbr1];
				tab[nbr1] = tab[nbr2];
				tab[nbr2] = temp;
			}
			nbr2++;
		}
		nbr1++;
	}
}

int    main()
{
    int tab[6] = {7, 6, 3, 4, 2, 5};
    int size = 6;

    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
    return (0);
}
