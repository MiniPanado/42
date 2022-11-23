/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:58:52 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 10:21:28 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (f == NULL)
	{
		return ;
	}
	temp = lst;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
	lst = temp;
}
