/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minipanado <minipanado@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:58:39 by lcerquei          #+#    #+#             */
/*   Updated: 2022/11/23 10:22:39 by minipanado       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlst;
	t_list	*new_element;

	if (lst == NULL || f == NULL || del == NULL)
	{
		return (NULL);
	}
	temp = lst;
	newlst = NULL;
	while (lst != NULL)
	{
		new_element = ft_lstnew(f(lst->content));
		if (new_element == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new_element);
		lst = lst->next;
	}
	lst = temp;
	return (newlst);
}
