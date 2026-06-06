/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:58:31 by mariafer          #+#    #+#             */
/*   Updated: 2026/06/03 16:58:32 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	if (size != 0 && count > ((size_t)-1 / size))
		return (NULL);
	new = malloc(size * count);
	if (!new)
		return (NULL);
	ft_bzero(new, count * size);
	return (new);
}
