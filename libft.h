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

int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memset(void *s, int c, size_t len);
void	ft_bzero(void *s, size_t n);

#endif