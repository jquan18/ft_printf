/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:36:17 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/10/28 14:36:17 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (i < n)
		{
			if (s2[i] - s1[i] != 0)
			{
				if (s1[i] > s2[i])
					return (1);
				else
					return (-1);
			}
		}
		i++;
	}
	return (0);
}
