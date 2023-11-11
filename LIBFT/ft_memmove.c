/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:25:17 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/10/28 14:25:17 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t		i;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (dest_ptr == 0 || src_ptr == 0 || dest_ptr == src_ptr)
		return (dest_ptr);
	if (dest > src)
	{
		while (len--)
			dest_ptr[len] = src_ptr[len];
	}
	else
	{
		i = 0;
		while (len--)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest_ptr);
}
