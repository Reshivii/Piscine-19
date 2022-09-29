/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:07:11 by achansar          #+#    #+#             */
/*   Updated: 2022/09/10 13:41:40 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char left, char center, char right, int x)
{
	write(1, &left, 1);
	x--;
	while (x > 1)
	{
		write(1, &center, 1);
		x--;
	}
	if (x == 1)
	{
		write(1, &right, 1);
	}
	write(1, "\n", 1);
}
