/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 22:39:19 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/09 23:22:44 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	arr[4] = {0, 0, 0, 1};

	while (!((arr[0] == 9) && (arr[1] == 9)))
	{
		ft_putchar(arr[0] + 48);
		ft_putchar(arr[1] + 48);
		ft_putchar(' ');
		ft_putchar(arr[2] + 48);
		ft_putchar(arr[3] + 48);
		if (!((arr[0] == 9) && (arr[1] == 8)))
			ft_putchar(',');
			if (!((arr[0] == 9) && (arr[1] == 8)))
				ft_putchar(' ');
			arr[3]++;
			if ((arr[3] = arr[3] % 10) == 0)
				arr[2] = (arr[2] + 1);
			if (arr[2] == 10)
			{
				arr[2] = arr[0];
				arr[1]++;
				if ((arr[1] = arr[1] % 10) == 0)
					arr[0]++;
				arr[3] = arr[1] + 1;
			}
	}
}
