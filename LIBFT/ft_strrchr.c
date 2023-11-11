/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:38:45 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/10/28 14:38:45 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	if (c == 0)
		return ((char *)str + len);
	while (len--)
	{
		if (str[len] == (char)c)
			return ((char *)str + len);
	}
	return (NULL);
}
