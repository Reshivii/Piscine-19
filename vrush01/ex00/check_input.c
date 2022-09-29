/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:59:52 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/19 15:10:48 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_size(char *str);

int	check_input(char *str)
{
	int	i;
	int	check;
	int	size;

	i = 0;
	check = 0;
	size = get_size(str);
	if (size != 31)
		return (0);
	while (str[i])
	{
		if (((str[i] >= '1') && (str[i] <= '4')) && check == 0)
		{
			i++;
			check += 1;
		}
		else if (str[i] == ' ' && check == 1)
		{
			i++;
			check -= 1;
		}
		else
			return (0);
	}
	return (1);
}

int	get_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
