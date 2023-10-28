/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 22:15:21 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/10/27 22:15:21 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int ft_atoi(char const *s)
{
	char	*str;
	size_t	i;
	size_t	res;
	size_t	sign;

	str = (char *)s;
	i = 0;
	res = 0;
	sign = 1;
	while (str[i] >= 9 && str[i] <= 13 && str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
