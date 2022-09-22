/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prova.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:02:32 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/22 17:24:52 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_revprint(char *str)
{
	int i;
	i = ft_strlen(str);
	--i;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return(str);
}
