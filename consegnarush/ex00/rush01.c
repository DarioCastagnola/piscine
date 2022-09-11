/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:59:21 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/11 09:46:58 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	stampalinea(int larghezza, char angolo, char riempimento, char angolo2)
{
	int	i;

	i = -1;
	while (++i < larghezza)
	{
		if (i == 0)
			ft_putchar(angolo);
		else if (i == larghezza -1)
			ft_putchar(angolo2);
		else
			ft_putchar(riempimento);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = -1;
	if (x > 0 || y > 0)
	{
		while (++i < y)
		{
			if (i == 0)
				stampalinea(x, 42 + 5, 42, 42 + 50);
			else if (i == y - 1)
				stampalinea(x, 42 + 50, 42, 42 + 5);
			else
				stampalinea(x, 42, 42 - 10, 42);
		}
	}
}
