/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin <juchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:22:09 by juchin            #+#    #+#             */
/*   Updated: 2023/10/19 20:37:42 by juchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t len)
{
	char	*temp;

	temp = (char *)ptr;
	while (len-- != 0)
		*temp++ = 0;
}

/*
int main() {
    char buffer[100];

    // Initialize the 'buffer' to all zero bytes using bzero
    bzero(buffer, sizeof(buffer));

    // Now the 'buffer' array contains all zero bytes.

    // You can print the contents of the 'buffer' to verify
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]);
    }

    return 0;
}
*/
