/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/30 15:52:46 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/30 15:52:47 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (s)
	{
		if (!(tab = (char *)malloc(sizeof(*tab) * (len) + 1)))
			return (NULL);
		while (s[start] && i < len)
		{
			tab[i] = s[start++];
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	return (NULL);
}
