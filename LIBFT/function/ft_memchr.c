/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:37:36 by juchin            #+#    #+#             */
/*   Updated: 2023/10/27 16:37:36 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	char	*strptr;

	*strptr = (char *)str;
	while (n--)
	{
		if (*strptr == (char)c)
			return ((void *)strptr);
		strptr++;
	}
	return (NULL);
}
