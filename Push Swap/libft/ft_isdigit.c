/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:30:56 by myerturk          #+#    #+#             */
/*   Updated: 2023/11/29 04:30:57 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char *str)
{
	if (*str == 43 || *str == 45)
		str++;
	if (!*str)
		return (1);
	while (*str)
		if (!('0' <= *str && *str++ <= '9'))
			return (1);
	return (0);
}
