/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:06:29 by achansar          #+#    #+#             */
/*   Updated: 2022/09/11 15:15:41 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char left, char center, char right, int x);

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	ft_putchar('A', 'B', 'C', x);
	y--;
	while (y > 1)
	{
		ft_putchar('B', ' ', 'B', x);
		y--;
	}
	if (y == 1)
	{
		ft_putchar('A', 'B', 'C', x);
	}
}
