/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/27 18:06:35 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 11:33:24 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include "libft/includes/libft.h"

# define BUFF_SIZE 4

typedef struct	s_content
{
	char		buf[BUFF_SIZE + 1];
	char		*next;
	int			ret;
	int			i;
}				t_content;

typedef struct	s_fd
{
	char		*save;
	int			fd;
	struct s_fd	*next;
}				t_fd;

int				get_next_line(const int fd, char **line);

#endif
