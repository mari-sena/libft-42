/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:50:10 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/26 17:50:11 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_dst_len(char *dst, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_size;

	j = 0;
	i = ft_dst_len(dst, dstsize);
	src_size = ft_strlen(src);
	if (i < dstsize)
	{
		while (i + j < dstsize - 1 && src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + src_size);
}
