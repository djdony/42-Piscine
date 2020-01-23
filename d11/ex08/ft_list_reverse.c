/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:50:42 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/22 19:07:41 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *root;
	t_list *node;
	t_list *next;

	root = *begin_list;
	node = 0;
	while (root)
	{
		next = (*root).next;
		(*root).next = node;
		node = root;
		root = next;
	}
	*begin_list = node;
}
