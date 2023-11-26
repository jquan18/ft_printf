/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:45:28 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/11/25 16:45:36 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char format)
{
	int		count;
	char	*hex;

	count = 0;
	if (format == 'x')
		hex = "0123456789abcdef";
	else if (format == 'X')
		hex = "0123456789ABCDEF";
	if (nb > 15)
		count += ft_puthex((nb / 16), format);
	write(1, &hex[nb % 16], 1);
	return (count + 1);
}
