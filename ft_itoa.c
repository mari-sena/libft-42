/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:57:59 by mariafer          #+#    #+#             */
/*   Updated: 2026/06/04 16:58:01 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_get_nbr_str(char *str, int n, size_t size)
{
	str[size] = '\0';
	if (n >= 0)
	{
		while (size--)
		{
			str[size] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		while (--size)
		{
			str[size] = (n % 10) * -1 + '0';
			n /= 10;
		}
		str[size] = '-';
	}
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	size;
	int		tmp;

	if (n >= 0)
		size = 1;
	else
		size = 2;
	tmp = n / 10;
	while (tmp)
	{
		size++;
		tmp /= 10;
	}
	num = malloc(size + 1);
	if (num == NULL)
		return (NULL);
	ft_get_nbr_str(num, n, size);
	return (num);
}
