/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:17:12 by startagl          #+#    #+#             */
/*   Updated: 2023/01/17 16:18:45 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*ptr;

	ptr = (int *)malloc(nmemb * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
