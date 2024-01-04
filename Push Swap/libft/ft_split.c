/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:32:47 by myerturk          #+#    #+#             */
/*   Updated: 2023/11/29 04:32:48 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		a;
	int		i;

	a = -1;
	i = 0;
	res = (char **)malloc(sizeof(char *) * (ft_strcount(s, c) + 1));
	if (!s || !res)
		return (NULL);
	while (++a < ft_strcount(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		res[a] = ft_substr(s, i, ft_charcount(&s[i], c));
		if (!res[a])
			return (ft_free_array(res, 0));
		i += ft_charcount(&s[i], c);
	}
	return (res[a] = NULL, res);
}
