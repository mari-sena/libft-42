/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:16:53 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/14 18:16:56 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(
			char *restrict dst,
			const char *restrict src,
			size_t dstsize);
size_t	ft_strlcat(
			char *restrict dst,
			const char *restrict src,
			size_t dstsize);

#endif