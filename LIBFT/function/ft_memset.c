/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:23:23 by juchin            #+#    #+#             */
/*   Updated: 2023/10/19 18:55:15 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void    *ft_memset(void *ptr, int value, size_t size)
{
    size_t  i;
    char   *temp;

    i = 0;
    temp = (char *)ptr;
    while (i < size)
    {
        temp[i] = (char)value;
        i++;
    }
    return (temp);
}

/*
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}
*/