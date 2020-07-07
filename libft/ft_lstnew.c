/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/30 15:50:52 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/30 15:50:53 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = ft_memalloc(sizeof(t_list))))
		return (NULL);
	list->content = content ? ft_memalloc(content_size) : NULL;
	if (list->content)
		ft_memcpy(list->content, content, content_size);
	list->content_size = content ? content_size : 0;
	list->next = NULL;
	return (list);
}
