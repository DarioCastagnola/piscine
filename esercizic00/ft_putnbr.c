/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:48:12 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/12 14:22:46 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int n);

void	big_neg_number(int n);

void	compare(int n);

void	compare(int n)
{
	int	temp;

	if (n < 0)
	{
		temp = -n + 48;
		write(1, "-", 1);
		write(1, &temp, 1);
	}
	else
	{
		temp = n + 48;
		write(1, &temp, 1);
	}
}

int	big_neg_printer(int temp)
{
	write(1, "-", 1);
	return (-temp);
}

void	ft_putnbr(int n)
{
	int	temp;

	if (n >= -9 && n <= 9)
	{
		compare(n);
	}
	else
	{
		temp = n % 10;
		n = n / 10;
		if (n < 0)
		{
			temp = big_neg_printer(temp);
			n = -n;
		}
	temp = temp + 48;
		ft_putnbr(n);
		write(1, &temp, 1);
	}
}
int main()
{
	ft_putnbr(-227);
	return(0);
}
