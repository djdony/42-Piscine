/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 20:12:39 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/16 21:33:17 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		length;

	i = 1;
	length = 0;
	while (i < argc)
		length += (ft_strlen(argv[i++]) + 1);
	if (!length)
		return (NULL);
	str = (char*)malloc(sizeof(*str) * (length));
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i != argc - 1)
			ft_strcat(str, "\n");
		i++;
	}
	str[length] = '\0';
	return (str);
}
