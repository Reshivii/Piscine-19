/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 07:21:48 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/22 16:08:04 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	while (i * i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		else if (i >= 46341)
			return (0);
		i++;
	}
	return (0);
}
