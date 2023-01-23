/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:45:11 by startagl          #+#    #+#             */
/*   Updated: 2023/01/18 14:52:39 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
// void
// 	*ft_memset(void *b, int c, size_t len)
// {
// 	size_t			i;

// 	if (!b)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		*(unsigned char*)(b + i) = (unsigned char)c;
// 		i++;
// 	}
// 	return (b);
// }