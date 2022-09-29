/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:09:09 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/09 12:53:51 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 0;
	while (i < (size / 2))
	{
		rev = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = rev;
		i++;
	}
}
