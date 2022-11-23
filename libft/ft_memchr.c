/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 03:07:53 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 17:38:33 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned const char	*s;
	size_t				i;

	if (str == NULL)
	{
		return (NULL);
	}
	s = (unsigned const char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
