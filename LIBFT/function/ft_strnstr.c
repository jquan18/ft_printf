/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:57:12 by juchin            #+#    #+#             */
/*   Updated: 2023/10/27 17:57:12 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *str, const char *substr, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (substr == NULL || substr[i] == '\0')
        return ((char *)str);
    while (str[i] && i < n)
    {
        if (str[i] == substr[i])
        {
            while (str[i + j] == substr[j] && (i + j) < n)
            {
                if (substr[j + 1] == '\0')
                    return ((char *)str + i);
                j++;
            }
            j = 0;
        }
        i++;
    }
    return (0);
}