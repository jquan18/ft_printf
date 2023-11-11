/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:37:20 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/11/04 23:28:17 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcount(char const *str, char c)
{
	size_t	i;
	size_t	count;
	size_t	isword;

	i = 0;
	count = 0;
	isword = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (isword)
				count++;
			isword = 0;
		}
		else
			isword = 1;
		i++;
	}
	if (isword)
		count++;
	return (count);
}

char	*ft_strclone(char *str, char c)
{
	size_t	i;
	size_t	len;
	char	*clone;

	i = 0;
	len = 0;
	while (str[len] && str[len] != c)
		len++;
	clone = (char *)malloc(sizeof(char) * (len + 1));
	if (clone == NULL)
		return (NULL);
	while (str[i] && str[i] != c)
	{
		clone[i] = str[i];
		i++;
	}
	clone[i] = '\0';
	return (clone);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	str_count;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	str_count = ft_strcount(s, c);
	str = (char **)malloc(sizeof(char *) * (str_count + 1));
	if (str == NULL)
		return (NULL);
	while (*s && i < str_count)
	{
		while (*s == c && *s)
			s++;
		str[i] = ft_strclone((char *)s, c);
		i++;
		while (*s != c && *s)
			s++;
	}
	str[i] = 0;
	return (str);
}
