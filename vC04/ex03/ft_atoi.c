/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:58:57 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/20 16:01:05 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_invalid(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while (check_invalid(str[i]))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_numeric(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char *number;
        //ft_atoi need to return -1234 and atoi 0
    number = " --- 5487 78";
    printf("%d\n", ft_atoi(number));
    //printf("%d", atoi(number));
}
