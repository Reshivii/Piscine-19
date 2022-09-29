/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:40:07 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/12 21:40:09 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	if (c < 32 || c == 127)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_to_hex(char p)
{
	char			*base;
	unsigned char	c;

	c = (unsigned char)p;
	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_to_hex(str[i]);
		}
		i++;
	}
}
