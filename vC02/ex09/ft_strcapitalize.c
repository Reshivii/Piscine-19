/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:49:27 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/10 19:13:05 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_upper(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	if (check_lower(str[0]))
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!check_num(str[i - 1]) && !check_alpha(str[i - 1])
			&& check_lower(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
