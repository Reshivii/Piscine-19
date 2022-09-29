/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:30:09 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/14 09:20:25 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
