/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:17:14 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/14 12:14:40 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)

{
	int	i;
	int	swap;
	int	j;

	j = 0;
	i = 0;
	while (j < size)
	{	
		i=0;
		while (i < (size -1))
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
		++i;
		}
		++j;
	}
}
int main()
{
	int tab[] = {7,74,35, 67, -7, 2, 4};
	int size;

	size = 7;
	ft_sort_int_tab(tab, size);
	int i = 0;
	while (i < size)
	{
		printf("%d  ", tab[i]);
		i++;
	}
}
