/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 23:01:43 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/28 23:17:52 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_init(t_verif *data)
{
	int	i;

	data->solv = malloc(sizeof(int) * data->len);
	if (!data->solv)
	{
		return ;
	}
	i = 0;
	while (i < data->len)
	{
		data->solv[i] = malloc(sizeof(int *) * data->width);
		i++;
	}
}
