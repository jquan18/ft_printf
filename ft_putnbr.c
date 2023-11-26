/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:45:00 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/11/26 01:48:28 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int		count;
	char	c;

	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		count++;
	}
	if (nb > 9)
		count += ft_putnbr((nb / 10));
	c = (nb % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}
