/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejikim <heejikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:32:48 by heejikim          #+#    #+#             */
/*   Updated: 2022/08/30 21:49:01 by heejikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2)
	{
		if (*s1 == 0 || idx >= n - 1)
			return (0);
		s1++;
		s2++;
		idx++;
	}
	if (*(unsigned char *)s1 - *(unsigned char *)s2 > 0)
		return (1);
	return (-1);
}
