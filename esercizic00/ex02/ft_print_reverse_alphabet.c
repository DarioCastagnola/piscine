/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:31:13 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/08 16:28:22 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_reverse_print_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
