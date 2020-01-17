/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:35:39 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/16 16:09:10 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int i;

	arr = NULL;
	if (min < max)
	{
		arr = (int*)malloc(sizeof(int) * (max - min));
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}
