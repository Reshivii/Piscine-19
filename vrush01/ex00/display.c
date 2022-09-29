/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:12:43 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/18 20:20:34 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	top_row(char side, char *center)
{
	int	i;

	i = 0;
	write (1, &side, 1);
	write (1, " ", 1);
	while (i <= 3)
	{
		write (1, &center[i], 1);
		write (1, " ", 1);
		i++;
	}
	write (1, &side, 1);
	write (1, "\n", 1);
}

void	mid_row(char *side, char center)
{
	int	i;
	int	j;

	i = 8;
	while ((i + 4) != 16)
	{
		j = 0;
		write (1, &side[i], 1);
		write (1, " ", 1);
		while (j <= 3)
		{
			write (1, &center, 1);
			write (1, " ", 1);
			j++;
		}
		write (1, &side[i + 4], 1);
		write (1, "\n", 1);
		i++;
	}
}

void	bottom_row(char side, char *center)
{
	int	i;

	i = 4;
	write (1, &side, 1);
	write (1, " ", 1);
	while (i <= 7)
	{
		write (1, &center[i], 1);
		write (1, " ", 1);
		i++;
	}
	write (1, &side, 1);
	write (1, "\n", 1);
}

void	display_row(char *str)
{
	top_row('-', str);
	mid_row(str, '0');
	bottom_row('-', str);
}
