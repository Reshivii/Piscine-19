/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:56:42 by aburnott          #+#    #+#             */
/*   Updated: 2022/09/28 23:16:48 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUFFER_SIZE 1024
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_variables
{
	int	max_i;
	int	max_j;
	int	square;
}	t_variables;
typedef struct s_verif
{
	char	empty;
	char	square;
	char	obs;
	int		len;
	int		width;
	int		**tab_int;
	int		**solv;
	char	**strings;
}	t_verif;

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
void	ft_error(void);
char	**ft_split(char *str, char *charset);
int		ft_atoi(char *str);
int		verif_param(t_verif *tab_sin);
void	print_max_sub_square(t_verif *data);
char	*ft_parsing_fd(int fd);
int		**ft_convert_tab(t_verif *tab_sin);
char	**create_two_dim_fd(int fd);
void	ft_init(t_verif *data);

#endif