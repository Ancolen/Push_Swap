/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:33:15 by myerturk          #+#    #+#             */
/*   Updated: 2023/11/29 04:33:16 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen(src);
	if (!dst && size == 0)
		return (si);
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src [s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + si);
}
