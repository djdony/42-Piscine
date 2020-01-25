/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 12:22:15 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/24 22:29:00 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root || !data_ref)
		return (0);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->left)
		return (btree_search_item(root->left, data_ref, cmpf));
	if (root->right)
		return (btree_search_item(root->right, data_ref, cmpf));
	return (0);
}
