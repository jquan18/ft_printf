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

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  n;
    size_t  src_len;
    size_t  dest_len;

    i = 0;
    n = 0;
    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    if ((!dest || !src) && size <= 0)
        return (0);

    while (dest[i] != '\0')
    {
        i++;
        size--;
    }

    while (src[n] != '\0')
    {
        if (size != 1) //left 1 for null
        {
            dest[i] = src[n];
            i++;
            size--;
        }
        n++;
    }
    dest[i] = '\0';
    return (src_len + dest_len);
}