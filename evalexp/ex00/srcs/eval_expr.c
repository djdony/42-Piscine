/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:11:43 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/26 21:44:44 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/functions.h"

int		parse_parenthesis(char **str)
{
	printf("paranthes\n");
	int		nbr;
	int		sign;	
	nbr = 0;
	sign = 1;
	printf("24 str[0] = %s\n", str[0]);
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if ((*str)[0] == '-')
			sign = -1;
		*str = *str + 1;
	}
	if ((*str)[0] == '(')
	{
		printf("35 found\n");
		*str = *str + 1;
		nbr = primary_operation(str);
		if ((*str)[0] == ')')
			*str = *str + 1;
		printf("38 nbr = %d\n", nbr);
		return (sign * nbr);
	}
	printf("34 str[0] = %s\n", str[0]);
	while ((*str)[0] >= '0' && (*str)[0] <= '9')
	{
		nbr = (nbr * 10) + (*str)[0] - '0';
		*str = *str + 1;
	}
	printf("40 nbr = %d\n", nbr);
	return (sign * nbr);
}

int		multiply(char **str)
{
	printf("multiply\n");
	int		nb1;
	int		nb2;
	char	operator;
	
	nb1 = parse_parenthesis(str);
	printf("59 nb1 = %d\n", nb1);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		operator = (*str)[0];
		*str = *str + 1;
		nb2 = parse_parenthesis(str);
		nb1 = do_op(nb1, nb2, operator);
	}
	printf("66 nb1 = %d\n", nb1);
	printf("67 nb2 = %d\n", nb2);
	return (nb1);
}

int		primary_operation(char **str)
{
	printf("primary\n");
	int		nb1;
	int		nb2;
	char	operator;
	nb1 = parse_parenthesis(str);
	printf("75 str[0] = %s\n", *str);
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		printf("82 nb1 = %d\n", nb1);
		operator = (*str)[0];
		*str = *str + 1;
		if (operator == '+' || operator == '-')
			nb2 = multiply(str);
		else
			nb2 = parse_parenthesis(str);
		nb1 = do_op(nb1, nb2, operator);
		printf("90 nb1 = %d\n", nb1);
		printf("91 nb2 = %d\n", nb2);
	}
	return (nb1);
}

char	*remove_whitespaces(char *str)
{
	int		i;
	int		j;
	char	*str2;
	i = 0;
	j = 0;
	str2 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j = j + 1;
		}
		i = i + 1;
	}
	str2[j] = '\0';
	return (str2);
}

int		eval_expr(char *str)
{
	str = remove_whitespaces(str);
	if (str[0] == '\0')
		return (0);
	return (primary_operation(&str));
}
