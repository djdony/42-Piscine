/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:53:58 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/16 21:34:25 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;

	i = 0;
	arr = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}
