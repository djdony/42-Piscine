/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 23:05:44 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/16 15:23:01 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*string;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	string = (char *)malloc(sizeof(char) * (i + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		string[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (string);
}
