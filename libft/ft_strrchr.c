/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 02:54:45 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 17:15:38 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
		{
			return ((char *)&str[len]);
		}
		len--;
	}
	return (NULL);
}
