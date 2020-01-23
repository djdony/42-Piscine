/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:56:22 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/22 19:08:47 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *root;

	root = *begin_list1;
	if (root == 0)
		*begin_list1 = begin_list2;
	else
	{
		while (root->next)
			root = root->next;
		root->next = begin_list2;
	}
}
