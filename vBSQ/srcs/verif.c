/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:12:57 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/28 23:16:48 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	verif_if_dont_touch(char **str, t_verif *tab_sin)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] != tab_sin->empty && str[i][j] != tab_sin->obs)
			{
				ft_error();
				return (0);
			}
			j++;
		}
		i++;
	}
	if (i != tab_sin->len)
	{
		ft_error();
		return (0);
	}
	return (1);
}

int	verif_if_printable(t_verif *tab_sin)
{
	if (tab_sin->empty <= 32 || tab_sin->empty >= 126)
		return (0);
	else if ((tab_sin->square <= 32 || tab_sin->square >= 126))
		return (0);
	else if ((tab_sin->obs <= 32 || tab_sin->obs >= 126))
		return (0);
	return (1);
}

int	verif_table(char **str, t_verif *tab_sin)
{
	int	i;
	int	a;
	int	j;

	a = 0;
	i = 1;
	while (i < tab_sin->len)
	{
		if (ft_strlen(str[i]) != ft_strlen(str[1]))
			return (0);
		j = 1;
		while (j < ft_strlen(str[i]))
		{
			if (str[i][j] == tab_sin->empty)
				a++;
			j++;
		}
		i++;
	}
	if (a == 0 && verif_if_printable(tab_sin) == 0)
		return (0);
	return (1);
}

int	verif_param(t_verif *tab_sin)
{
	tab_sin->empty = tab_sin->strings[0][ft_strlen(tab_sin->strings[0]) - 3];
	tab_sin->obs = tab_sin->strings[0][ft_strlen(tab_sin->strings[0]) - 2];
	tab_sin->square = tab_sin->strings[0][ft_strlen(tab_sin->strings[0]) - 1];
	if (tab_sin->square == tab_sin->empty 
		|| tab_sin->empty == tab_sin->obs || tab_sin->obs == tab_sin->square)
		return (0);
	tab_sin->len = ft_atoi(tab_sin->strings[0]);
	if (verif_table(tab_sin->strings, tab_sin) == 0)
	{
		ft_error();
		return (0);
	}
	return (1);
}
