/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:35:36 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/22 10:55:38 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{ 
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
		   i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}	
