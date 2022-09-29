/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:30:42 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/26 17:52:25 by aburnott         ###   ########.fr       */
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

int	check_str(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (check_str(str[i], charset))
			i++;
		if (!check_str(str[i], charset) && str[i])
		{
			count++;
			while (!check_str(str[i], charset) && str[i])
				i++;
		}
	}
	return (count + 1);
}

char	*word(int *j_int, char *str, char *charset)
{
	int		len;
	char	*buf;
	int		i;

	i = 0;
	len = 0;
	while (check_str(str[*j_int], charset))
		(*j_int)++;
	while (!check_str(str[*j_int + len], charset) && str[*j_int + len])
		len++;
	buf = malloc((len + 1) * sizeof(*buf));
	if (!buf)
		return (NULL);
	while (i < len)
	{
		buf[i] = str[*j_int];
		i++;
		*j_int = *j_int + 1;
	}
	buf[i] = 0;
	return (buf);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		count;
	int		i;
	int		j;

	i = 0;
	j = 0;
	count = ft_count(str, charset);
	strings = malloc(count * sizeof(char *));
	if (!strings)
		return (NULL);
	while (i < count - 1)
	{
		strings[i] = word(&j, str, charset);
		i++;
	}
	strings[i] = 0;
	return (strings);
}
