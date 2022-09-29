/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo <hugo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:24:44 by hbrygo            #+#    #+#             */
/*   Updated: 2022/09/28 21:1:48 by hugo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	min(int a, int b, int c)
{
	int	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	print_max_sub_square(t_verif *data)
{
	t_variables	stock;
	int			i;
	int			j;
	int			max_of_s;

	ft_init(data);
	stock.max_j = 0;
	stock.max_i = 0;
	i = -1;
	i = 0;
	while (i < data->len)
	{
		j = 0;
		while (j < data->width)
		{
			data->solv[i][j] = 0;
			j++;
		}
		i++;
	}
	while (++i < data->len)
	{
		data->solv[i][0] = data->tab_int[i][0];
	}
	j = -1;
	while (++j < data->width)
	{
		data->solv[0][j] = data->tab_int[0][j];
	}
	i = 1;
	while (i < data->len)
	{
		j = 1;
		while (j < data->width)
		{
			if (data->tab_int[i][j] == 1)
				data->solv[i][j] = min(data->solv[i][j - 1],
				data->solv[i - 1][j],
				data->solv[i - 1][j - 1]) + 1;
			else
				data->solv[i][j] = 0;
			j++;
		}
		i++;
	}
	max_of_s = data->solv[0][0];
	i = 0;
	while (i < data->len)
	{
		j = 0;
		while (j < data->width)
		{
			if (max_of_s < data->solv[i][j])
			{
				max_of_s = data->solv[i][j];
				stock.max_i = i;
				stock.max_j = j;
			}
			j++;
		}
		i++;
	}
	i=0;
    while(i < data->len) {
        j=0;
        while(j < data->width) {
            if(i >= (stock.max_i - max_of_s) && i <= stock.max_i
             && j >= (stock.max_j - max_of_s) && j <= stock.max_j) {
                write (STDOUT_FILENO, &data->square, 1);
             } else if(data->tab_int[i][j] == 0) {
                write (STDOUT_FILENO, &data->obs, 1);
             } else {
                write (STDOUT_FILENO, &data->empty, 1);
             }
            j++;
        }
        write (STDOUT_FILENO, "\n", 1);
        i++;
    }
}
