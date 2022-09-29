/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:59:13 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/19 11:36:48 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "includes.h"

int	main(int argc, char **argv)
{	
	char	*new_tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_tab = (char *)malloc(sizeof(char));
	if (argc != 2 || (!(check_input(argv[1]))))
	{
		show_error();
		return (-1);
	}
	else
	{
		while (argv[1][i])
		{
			new_tab[j] = argv[1][i];
			j++;
			i += 2;
		}
		display_row(new_tab);
	}
	free(new_tab);
	return (0);
}
