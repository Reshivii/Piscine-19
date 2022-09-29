/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:04:37 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/28 23:16:48 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*read_file(int fd)
{
	char	*buf;
	int		ret;

	buf = malloc(sizeof(*buf) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ret = read (fd, buf, BUFFER_SIZE);
	buf[ret] = '\0';
	return (buf);
}

char	*get_buf_in_str(int fd)
{
	int		len;
	char	*buf;
	char	*str;

	buf = 0;
	str = 0;
	len = BUFFER_SIZE;
	str = (char *)malloc(10000000);
	if (!str)
		return (NULL);
	while (len == BUFFER_SIZE)
	{
		buf = read_file(fd);
		if (!buf)
		{
			ft_error();
			return (NULL);
		}
		ft_strcat(str, buf);
		len = ft_strlen(buf);
	}
	return (str);
}

char	*ft_parsing_fd(int fd)
{
	char	*str;

	str = get_buf_in_str(fd);
	return (str);
}
