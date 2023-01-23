/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:13:04 by startagl          #+#    #+#             */
/*   Updated: 2023/01/20 11:54:05 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	slen = ft_strlen(src);
	if (!dest && size == 0)
		return (slen);
	dlen = ft_strlen(dest);
	j = dlen;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	s;
// 	size_t	d;
// 	size_t	di;
// 	size_t	si;

// 	si = ft_strlen(src);
// 	if (!dst && size == 0)
// 		return (si);
// 	d = ft_strlen(dst);
// 	di = d;
// 	if (size <= di)
// 		return (size + si);
// 	s = 0;
// 	while (src[s] && d + 1 < size)
// 	{
// 		dst[d] = src[s];
// 		s++;
// 		d++;
// 	}
// 	dst[d] = 0;
// 	return (di + si);
// }
