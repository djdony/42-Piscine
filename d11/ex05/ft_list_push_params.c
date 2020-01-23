/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:49:49 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/22 16:52:10 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front2(t_list **begin_list, void *data)
{
	t_list *node;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		node = ft_create_elem(data);
		(*node).next = (*begin_list);
		*begin_list = node;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*l;

	i = 1;
	l = 0;
	while (i < ac)
	{
		ft_list_push_front2(&l, av[i]);
		++i;
	}
	return (l);
}
