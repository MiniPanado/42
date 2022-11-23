/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:15:57 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 10:49:58 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	dest = (char *)str1;
	src = (const char *)str2;
	if (str1 > str2)
	{
		while (n-- > 0)
		{
			dest[n] = src[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (str1);
}
