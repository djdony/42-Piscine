/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:46:57 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/16 23:10:03 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' 
			|| c == '\v' || c == '\r')
		return (1);
	else
		return (0);
}

int	word_count(char *s)
{
	int	i;
	int	wc;
	int	start;

	wc = 0;
	i = 0;
	start = 1;
	while (s[i] != '\0')
	{
		if (is_whitespace(s[i]))
			start = 1;
		if (!is_whitespace(s[i] && start))
		{
			start = 0;
			wc++;
		}
		i++;
	}
	return (wc);
}

int	symbol_count(int *start, char *s)
{
	int	stop;
	int	count;

	count = 0;
	stop = 0;
	while (s[*start]) != '\0')
	{
		if (!is_whitespace(s[*start]))
		{
			stop = 1;
			count++;
		}
		if (is_whitespace(s[*start]) && stop)
			return (count);
		(*start)++;
	}
	return (cnt);
}

char	*ft_strncpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	*dest = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int	wc;
	int	i;
	int	start;
	int	symbols;
	char	**res;

	wc = word_count(str);
	res = (char **)malloc(sizeof(char *) * (wc +1));
	start = 0;
	i = 0;
	while (i < wc)
	{
		symbols = symbol_count(&start, str);
		res[i] = malloc(sizeof(char) * (symbols + 1));
		ft_strncpy(res[i], &str[start - symbols], symbols);
		i++;
	}
	res[i] = "0";
	return (res);
}
