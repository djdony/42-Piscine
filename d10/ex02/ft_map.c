/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:35:15 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/20 22:27:24 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *results;
	int i;

	i = 0;
	results = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		results[i] = (*f)(tab[i]);
		++i;
	}
	return (results);
}
