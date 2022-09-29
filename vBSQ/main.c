/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugott <hugott@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:08:29 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/28 22:114:6 by hugo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

char	**create_two_dim(char *entry)
{
	int		fd;
	char	**return_value;

	fd = open(entry, O_RDONLY);
	if (fd == -1)
	{
		return (NULL);
	}
	return_value = (create_two_dim_fd(fd));
	close(fd);
	return (return_value);
}

char	**create_two_dim_fd(int fd)
{
	char	*str;
	char	*charset;
	t_verif	data;

	charset = "\n";
	str = ft_parsing_fd(fd);
	if (!str)
	{
		ft_error();
		return (NULL);
	}
	data.strings = ft_split(str, charset);
	if (!data.strings)
	{
		ft_error();
		return (NULL);
	}
	else if (!verif_param(&data))
	{
		ft_error();
		return (NULL);
	}
	ft_convert_tab(&data);
	print_max_sub_square(&data);
	return (data.strings);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
	{
		create_two_dim_fd(STDIN_FILENO);
	}
	else
	{
		while (i < argc)
		{
			create_two_dim(argv[i]);
			i++;
		}
	}
	return (0);
}
