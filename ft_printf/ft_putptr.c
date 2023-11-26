/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:45:55 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/11/26 01:48:03 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptrhex(unsigned long nb)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (nb > 15)
		count += ft_putptrhex((nb / 16));
	write(1, &hex[nb % 16], 1);
	return (count + 1);
}

int	ft_putptr(unsigned long ptr)
{
	int		count;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	count = 2;
	count += ft_putptrhex(ptr);
	return (count);
}
