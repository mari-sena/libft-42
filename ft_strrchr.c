/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:40:33 by mariafer          #+#    #+#             */
/*   Updated: 2026/06/06 11:40:34 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			result = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		result = (char *)s;
	return (result);
}
