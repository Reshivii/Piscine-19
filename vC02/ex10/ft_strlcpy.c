/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:36:24 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/13 22:01:47 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = ft_str_len(src);
	count = 0;
	if (i + 1 < size)
	{
		count = -1;
		while (++count < i + 1)
		{
			dest[count] = src[count];
		}
	}
	else if (size)
	{
		count = -1;
		while (++count < size - 1)
		{
			dest[count] = src[count];
		}
		dest[count] = '\0';
	}
	return (i);
}
