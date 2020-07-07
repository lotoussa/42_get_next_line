/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/30 15:52:21 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/30 15:52:21 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*tab;
	int		i;

	i = 0;
	if (s)
	{
		if (!(tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[i])
		{
			tab[i] = f(s[i]);
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	return (NULL);
}
