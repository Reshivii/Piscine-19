/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:05:18 by hugo              #+#    #+#             */
/*   Updated: 2022/09/28 23:17:52 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	**ft_convert_tab(t_verif *data)
{
	int	i;
	int	j;

	data->tab_int = malloc(sizeof(int) * data->len);
	if (!data->tab_int)
		return (0);
	i = 0;
	data->width = ft_strlen(data->strings[1]);
	while (i < data->len + 1)
	{
		data->tab_int[i - 1] = malloc(sizeof(int *) * data->width);
		if (!data->tab_int[i - 1])
			return (0);
		j = -1;
		while (data->strings[i][++j])
		{
			if (data->strings[i][j] == data->obs)
				data->tab_int[i - 1][j] = 0;
			if (data->strings[i][j] == data->empty)
				data->tab_int[i - 1][j] = 1;
		}
		i++;
	}
	return (data->tab_int);
}
