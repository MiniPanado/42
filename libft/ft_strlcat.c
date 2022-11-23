/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:29:03 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 16:42:41 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	if (dest == NULL || src == NULL)
		return (0);
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	dest_len = ft_strlen(dest);
	if (dest_len >= size)
	{
		return (size + ft_strlen(src));
	}
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (ft_strlen(src) + dest_len);
}
