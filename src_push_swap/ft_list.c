/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:05:13 by arosset           #+#    #+#             */
/*   Updated: 2017/05/22 14:05:22 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_plist     *ft_plistnew(void)
{
    t_list	*new;

    if (!(new = (t_list*)malloc(sizeof(t_list))))
    	return (NULL);
    if (new != NULL)
    {
    	new->argc = 0;
    	new->coup = 0;
    	new->head = NULL;
    	new->tail = NULL;
    }
    return (new);
}
