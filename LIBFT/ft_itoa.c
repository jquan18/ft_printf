/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:48:39 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/11/05 00:21:51 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ilen(long long nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 1)
	{
		len++;
		nb = -nb;
	}
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_str(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long long	nb;

	nb = (long long)n;
	len = ft_ilen(nb);
	str = ft_str(len);
	if (n < 0)
		nb = -nb;
	while (len--)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	str[ft_ilen(n)] = '\0';
	return (str);
}
