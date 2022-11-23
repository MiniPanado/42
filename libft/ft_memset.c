/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:24:29 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 10:51:27 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = (char *)str;
	while (n-- > 0)
	{
		s[n] = (unsigned char)c;
	}
	return (str);
}
