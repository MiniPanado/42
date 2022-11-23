/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:58:28 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 10:24:29 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		size;

	if (lst == NULL)
	{
		return (0);
	}
	temp = lst;
	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	lst = temp;
	return (size);
}
