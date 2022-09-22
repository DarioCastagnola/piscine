/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:37:09 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/17 14:42:08 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strsize(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char *ft_strrev(char *str)
{
	int i;
	int size;
	int temp;

	i = 0; 
	size = ft_strsize(str) - 1;
	while (size > i)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		i++;
		size--;
	}
	return (str);
}
#include <stdio.h>

int main()
{
	char str[] = "Ciao Mondo!";
	
	printf("%s\n", ft_strrev(str));
	return (0);
}
