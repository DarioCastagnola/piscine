/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:59:21 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/10 14:19:40 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	stampalinea(int larghezza, char angolo, char riempimento, char angolo2)
{
	int	lmao;

	lmao = 0;
	while (lmao < larghezza)
	{
		if (lmao == 0)
		{
			ft_putchar(angolo);
		}
		else if (lmao == larghezza -1)
		{
			ft_putchar(angolo2);
		}
		else
		{
			ft_putchar(riempimento);
		}
	lmao++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	lmao;

	lmao = 0;
	if (x > 0 || y > 0)
	{
		while (lmao < y)
		{
			if (lmao == 0)
			{
				stampalinea(x, 'A', 'B', 'A');
			}
			else if (lmao == y - 1)
			{
				stampalinea(x, 'C', 'B', 'C');
			}
			else
			{
				stampalinea(x, 'B', ' ', 'B');
			}
			lmao++;
		}
	}
}
