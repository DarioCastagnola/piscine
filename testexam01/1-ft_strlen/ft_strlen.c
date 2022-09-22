/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:32:19 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/17 15:11:51 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
int main()
{
	char str[] = "qwepodkdkoqwwdpoqwdkqwdnqwdmqwpmdqwpfmqpfmoqwfmoqfqwpdmqwdmoqwdpomdqwodmqwpdoqwdpomqwdmo";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
}
