/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:11:55 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/22 22:43:43 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		count;

	count = 0;
	if (!begin_list)
		return (count);
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		++count;
	}
	return (count);
}
