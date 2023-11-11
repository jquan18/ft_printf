/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:47:35 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/11/04 19:51:10 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	size_t	strlen;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strlen = end - start + 1;
	str = (char *)malloc(sizeof(char) * strlen);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[start], strlen);
	return (str);
}
