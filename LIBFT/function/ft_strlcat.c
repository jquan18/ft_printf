/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 20:21:03 by juchin            #+#    #+#             */
/*   Updated: 2023/10/21 21:41:33 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  n;
    size_t  totallen;

    i = 0;
    n = 0;
    totallen = ft_strlen(dest) + ft_strlen((char *)src);
    if (!dest || !src || size <= 0)
        return (0);

    while (dest[i] && size > 1)
    {
        i++;
        size--;
    }

    while (src[n] && size > 1)
    {
        dest[i] = src[n];
        i++;
        size--;
        n++;
    }
    dest[i] = '\0';
    return (totallen);
}