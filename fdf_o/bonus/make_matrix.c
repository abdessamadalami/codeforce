/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 08:49:55 by ael-oual          #+#    #+#             */
/*   Updated: 2022/04/23 08:11:10 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include "fdf.h"

int	to_decimal(char *str)
{
	int		i;
	char	c;
	int		nbr;
	int		len;

	i = 0;
	c = 0;
	nbr = 0;
	if (str[0] == '0' && str[1] == 'x')
		str = str + 2;
	len = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		c = ft_tolower(str[i]);
		nbr = nbr + ft_strchr_int(HIX, c) * pow(16, len);
		i++;
		len--;
	}
	return (nbr);
}

static void	color_split(char **split_z, int **xyz_m, int i)
{
	if (split_z[0] != 0)
		xyz_m[i][3] = ft_atoi(split_z[0]);
	if (split_z[1] != 0)
		xyz_m[i][4] = to_decimal(split_z[1]);
	else if (xyz_m[i][3] > 0)
		xyz_m[i][4] = 0xff0000;
	else
		xyz_m[i][4] = 0xffffff;
}

void	x_y_z_c_function(char **split_line, int nbr_lin, int **xyz_m)
{
	int			index;
	char		**split_z;
	static int	i;

	index = 0;
	while (split_line[index] != 0)
	{
		xyz_m[i] = malloc(5 * sizeof(int));
		if (xyz_m[i] == NULL)
			allocation_problem();
		xyz_m[i][0] = i;
		xyz_m[i][1] = index;
		xyz_m[i][2] = nbr_lin;
		split_z = ft_split(split_line[index], ',');
		color_split(split_z, xyz_m, i);
		if (xyz_m[i][3] > 0)
			xyz_m[i][5] = 1;
		else
			xyz_m[i][5] = 0;
		i++;
		index++;
		free_function(split_z);
		split_z = 0;
	}
}

void	error_function(char **split_array)
{
	free_function(split_array);
	system("leaks a.out");
	write(1, "error map\n ", 12);
	exit(0);
}

int	**check_list(t_list *list, int *length_line, int line_nbr)
{
	char	**split_array;
	int		nbr_lin;
	int		**x_y_z_c_array;
	t_list	*node;
	int		j;

	node = list;
	*length_line = ft_strlen_space(list -> content) + 1;
	x_y_z_c_array = func_25(*length_line, line_nbr);
	nbr_lin = 0;
	j = 0;
	while (list -> next)
	{
		split_array = ft_split(list -> content, 32);
		j = ft_strlen_space(list -> content) + 1;
		if (j != ((*length_line)) && split_array[j - 1][0] != '\n')
			error_function(split_array);
		x_y_z_c_function(split_array, nbr_lin++, x_y_z_c_array);
		list = list -> next;
		free_function(split_array);
		split_array = 0;
	}
	x_y_z_c_array[*length_line * line_nbr] = 0;
	return (x_y_z_c_array);
}
