/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:30:33 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 16:30:34 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*dest;
	int		i;

	if (string == NULL)
	{
		return (NULL);
	}
	dest = (char *)malloc(sizeof(char) * (ft_strlen(string) + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (string[i] != '\0')
	{
		dest[i] = string[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
