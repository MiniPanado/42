/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:31:02 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 09:40:14 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numbersize(int n)
{
	int	size;

	if (n == 0)
	{
		return (1);
	}
	size = 0;
	if (n < 0)
	{
		size++;
	}
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			size;
	char		*str;

	nbr = n;
	size = ft_numbersize(nbr);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
	{
		str[0] = '0';
	}
	str[size] = '\0';
	while (nbr != 0)
	{
		str[--size] = "0123456789"[nbr % 10];
		nbr /= 10;
	}
	return (str);
}
