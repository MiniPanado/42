/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcerquei <lcerquei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:41:26 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/09 17:41:48 by lcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	max_len;

	if (s == NULL)
	{
		return (NULL);
	}
	if (ft_strlen(s) < start)
	{
		return (ft_strdup(""));
	}
	max_len = ft_strlen(&s[start]);
	if (len > max_len)
	{
		len = max_len;
	}
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(sub, &s[start], (len + 1));
	return (sub);
}
