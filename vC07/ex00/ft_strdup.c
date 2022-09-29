/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:45:33 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/20 13:26:02 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*str_cpy;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	str_cpy = malloc(sizeof(*str_cpy) * (size + 1));
	if (!str_cpy)
		return (0);
	while (i < size)
	{
		str_cpy[i] = src[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
