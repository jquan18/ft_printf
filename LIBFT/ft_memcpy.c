/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:49:24 by juchin            #+#    #+#             */
/*   Updated: 2023/10/19 21:34:15 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t numBytes)
{
    size_t  i;
    char    *dest_ptr;
    const char  *src_ptr;

    i = 0;
    dest_ptr = (char *)dest;
    src_ptr = (const char *)src;
    while (i < numBytes)
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }
    return (dest_ptr);
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    ft_memcpy(destination, source, 14);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}