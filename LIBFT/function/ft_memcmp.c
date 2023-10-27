/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:52:26 by juchin            #+#    #+#             */
/*   Updated: 2023/10/27 16:52:26 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    char    *s1;
    char    *s2;
    size_t  i;

    i = 0;
    s1 = (char *)str1;
    s2 = (char *)str2;
    while (s1[i] || s2[i])
    {
        if (i < n)
        {
            if (s2[i] - s1[i] != 0)
            {
                if (s1[i] > s2[i])
                    return (1);
                else
                    return (-1);
            }
        }
        i++;
    }
    return (0);
}