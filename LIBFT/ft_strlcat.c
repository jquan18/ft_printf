/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:28:46 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/10/28 14:28:46 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (dest[i] && i < size)
		i++;
	while (src[n] && (i + n + 1) < size)
	{
		dest[i + n] = src[n];
		n++;
	}
	if (i < size)
		dest[i + n] = '\0';
	return (i + ft_strlen(src));
}
