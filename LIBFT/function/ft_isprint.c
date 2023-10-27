/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:56:37 by juchin            #+#    #+#             */
/*   Updated: 2023/10/19 18:00:57 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int  c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}