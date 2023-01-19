/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejikim <heejikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 01:52:57 by heejikim          #+#    #+#             */
/*   Updated: 2022/08/24 03:28:22 by heejikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	str[5];

	str[2] = ' ';
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			str[0] = '0' + a / 10;
			str[1] = '0' + a % 10;
			str[3] = '0' + b / 10;
			str[4] = '0' + b % 10;
			write(1, str, 5);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
