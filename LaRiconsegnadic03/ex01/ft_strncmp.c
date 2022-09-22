/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:40:38 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/22 14:48:34 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	result = 0;
	i = 0;
	while (i < n && result == 0)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			result = s1[i] - s2[i];
			break ;
		}
		result = s1[i] - s2[i];
		i++;
	}
	return (result);
}
