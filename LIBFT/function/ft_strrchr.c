/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:04:35 by juchin            #+#    #+#             */
/*   Updated: 2023/10/27 16:04:35 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(char const *str, int c)
{
    size_t  len;

    len = ft_strlen((char *)str);
    while (len--)
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }
    return (NULL);
}