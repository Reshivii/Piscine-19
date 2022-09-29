/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:29:39 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/26 17:53:19 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_new_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	if (size <= 0)
		len = 1;
	else
		len += ft_strlen(sep) * size - 1;
	str = malloc(sizeof((*str)) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		s_i;
	int		n;

	str = ft_new_str(size, strs, sep);
	i = -1;
	n = 0;
	while (++i < size)
	{
		s_i = 0;
		while (strs[i][s_i])
		{
			str[n++] = strs[i][s_i];
			s_i++;
		}
		s_i = 0;
		while (sep[s_i] && i != size - 1)
		{
			str[n++] = sep[s_i];
			s_i++;
		}
	}
	str[n] = '\0';
	return (str);
}
