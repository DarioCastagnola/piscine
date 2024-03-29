/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_structure.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopopa <sopopa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:31:21 by sorin             #+#    #+#             */
/*   Updated: 2023/01/16 11:28:02 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_extension_file(char *pathfile)
{
	char	*str;

	str = ft_strchr(pathfile, '.');
	if (str == NULL)
		return (FILE_EXTENSION_WRONG);
	if (ft_strncmp(str, ".ber", 4) == 0)
		return (1);
	return (FILE_EXTENSION_WRONG);
}

int	ft_check_forbidden_chars(t_game_vars *game)
{	
	int	i;
	int	j;

	i = 0;
	while (i < game->height)
	{	
		j = 0;
		while (j < game->width)
		{
			if (ft_strchr("EPC01", game->map_matrix[i][j]) == NULL)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_width(t_game_vars *game)
{
	int	i;

	i = 0;
	if (!game && !game->map_matrix)
		return (0);
	while (i < game->height - 1)
	{
		if (ft_strlen(game->map_matrix[i]) - 1 != (size_t)game->width)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_check_walls(t_game_vars *game)
{
	int	rows;
	int	cols;

	rows = 0;
	while (rows <= game->height - 1)
	{
		if (rows == 0 || rows == game->height - 1)
		{	
			cols = 0;
			while (cols < game->width)
			{
				if (game->map_matrix[rows][cols] != '1')
					return (0);
				cols++;
			}
		}
		if (game->map_matrix[rows][0] != '1')
			return (0);
		if (game->map_matrix[rows][game->width - 1] != '1')
			return (0);
		rows++;
	}
	return (1);
}

int	ft_check_errors(t_game_vars *game)
{
	if (!game)
		error_program_null();
	if (ft_check_forbidden_chars(game) != 1)
		error_forbidden_char();
	if (ft_check_width(game) != 1)
		error_irregular_map();
	if (ft_check_walls(game) != 1)
		error_incomplete_walls();
	if (ft_check_player(game) != 1)
		error_player_inexistent();
	if (ft_check_collectible(game) != 1)
		error_collectible_inexistent();
	if (ft_check_exit(game) != 1)
		error_exit_inexistent();
	return (1);
}
