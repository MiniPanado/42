/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:47:07 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 10:46:24 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destiny;
	const char	*source;
	size_t		i;

	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	destiny = (char *)dest;
	source = (const char *)src;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dest);
}
