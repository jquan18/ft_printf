/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:46:19 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/11/25 16:46:29 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
		count += ft_putuint((nb / 10));
	ft_putchar((nb % 10) + '0');
	return (count + 1);
}
