/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:24:08 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/10/28 14:24:08 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t numBytes)
{
	size_t		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	while (i < numBytes)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest_ptr);
}
