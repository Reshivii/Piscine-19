/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:02:58 by achansar          #+#    #+#             */
/*   Updated: 2022/09/11 17:48:32 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
int		our_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		rush(5, 4);
		return (0);
	}
	else if (argc != 3)
	{
		write (1, "Error: need two arguments or nothing after ./a.out\n", 51);
		return (-1);
	}
	rush(our_atoi(argv[1]), our_atoi(argv[2]));
	return (0);
}

int	our_atoi(char *str)
{
	int	sign;
	int	convert;
	int	i;

	i = 0;
	convert = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		convert = convert * 10 + str[i] - '0';
		i++;
	}
	return (sign * convert);
}
