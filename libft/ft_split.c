/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:22:29 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 16:26:53 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_totalwords(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
		{
			i++;
		}
		if (str[i] != '\0')
		{
			count++;
		}
		while (str[i] != '\0' && str[i] != c)
		{
			i++;
		}
	}
	return (count);
}

static int	ft_wordsize(char const *str, int start, char c)
{
	int	size;

	size = 0;
	while (str[start] != '\0' && str[start] != c)
	{
		size++;
		start++;
	}
	return (size);
}

static void	ft_strsfree(char **strs, int size)
{
	while (size-- > 0)
	{
		free(strs[size]);
	}
	free(strs);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		word;
	int		i;

	if (str == NULL)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_totalwords(str, c) + 1));
	if (split == NULL)
		return (NULL);
	word = -1;
	i = 0;
	while (++word < ft_totalwords(str, c))
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		split[word] = ft_substr(str, i, ft_wordsize(str, i, c));
		if (split[word] == NULL)
		{
			ft_strsfree(split, ft_totalwords(str, c));
			return (NULL);
		}
		i += ft_wordsize(str, i, c);
	}
	split[word] = NULL;
	return (split);
}
