/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <arosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:32:43 by arosset           #+#    #+#             */
/*   Updated: 2017/05/23 15:26:21 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static void		ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*tmp;

	tmp = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

static t_gnl	*ft_gnl_search(int fd, t_gnl **head)
{
	t_gnl	*tmp;

	tmp = *head;
	while (tmp && tmp->fd != fd)
		tmp = tmp->next;
	return (tmp);
}

static int		ft_gnl_build(int fd, char *buf, t_gnl **head)
{
	t_gnl	*elem;
	char	*str;

	elem = ft_gnl_search(fd, head);
	if (elem == NULL)
	{
		if (!(elem = (t_gnl *)ft_lstnew((void *)buf, (ft_strlen(buf) + 1))))
			return (-1);
		elem->fd = fd;
		ft_lstaddback((t_list **)head, (t_list *)elem);
	}
	else
	{
		if (!(str = ft_strjoin((char *)elem->content, buf)))
			return (-1);
		free(elem->content);
		elem->content = (void *)str;
		elem->content_size = ft_strlen(str) + 1;
	}
	if (ft_strstr((char *)elem->content, "\n") != NULL)
		return (1);
	return (0);
}

static char		*ft_gnl_trim(int fd, t_gnl **head)
{
	t_gnl	*elem;
	char	*bgn;
	char	*end;
	char	*cpy;

	elem = ft_gnl_search(fd, head);
	if (elem->content == NULL)
		return (NULL);
	if ((end = ft_strstr((char *)elem->content, "\n")) != NULL)
	{
		if (!(bgn = ft_strsub((char *)ECON, 0, (ESIZE - ft_strlen(++end) - 2))))
			return (NULL);
		cpy = elem->content;
		elem->content = (ft_strlen(end) == 0) ? NULL : (void *)ft_strdup(end);
		elem->content_size = ft_strlen(end) + 1;
		free(cpy);
	}
	else
	{
		if (!(bgn = ft_strdup((char *)elem->content)))
			return (NULL);
		free((*elem).content);
		elem->content = NULL;
	}
	return (bgn);
}

int				get_next_line(int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
	int				builder;
	static t_gnl	*head;

	while ((ret = read(fd, buf, BUFF_SIZE)) != 0)
	{
		if (ret < 0 || fd < 0 || line == NULL)
			return (-1);
		buf[ret] = '\0';
		if ((builder = ft_gnl_build(fd, buf, &head)) == 1)
		{
			*line = ft_gnl_trim(fd, &head);
			return (1);
		}
		if (builder == -1)
			return (-1);
	}
	if ((builder = ft_gnl_build(fd, buf, &head)) == 1)
	if ((*line = ft_gnl_trim(fd, &head)) != NULL)
		return (1);
	return (0);
}
