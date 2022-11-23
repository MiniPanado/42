/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:13:51 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 17:35:53 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*mlc;

	mlc = malloc(nitems * size);
	if (mlc == NULL)
	{
		return (NULL);
	}
	ft_bzero(mlc, (nitems * size));
	return (mlc);
}
