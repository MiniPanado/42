/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:00:56 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 17:20:49 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getstart(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(set, s[i]) == NULL)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

static int	ft_getend(char const *s, char const *set)
{
	int	len;

	len = ft_strlen(s);
	while (len-- > 0)
	{
		if (ft_strchr(set, s[len]) == NULL)
		{
			return (len + 1);
		}
	}
	return (len);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int	start;
	int	end;

	if (s == NULL)
	{
		return (NULL);
	}
	if (set == NULL)
	{
		return (ft_strdup(s));
	}
	start = ft_getstart(s, set);
	end = ft_getend(s, set);
	if (start >= end)
	{
		return (ft_strdup(""));
	}
	return (ft_substr(s, start, (end - start)));
}
