/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:35:44 by myerturk          #+#    #+#             */
/*   Updated: 2024/01/05 00:13:47 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include "./libft/libft.h"
#include <stdlib.h>

int	ft_lstdup(t_lst *stack, int nbr)
{
	if (!stack)
		return (0);
	if (stack->cnt == nbr)
		return (1);
	return (ft_lstdup(stack->nx, nbr));
}

void	ft_error(t_stack *stack, size_t flag)
{
	if (stack->split_count)
		ft_free_array(stack->all, 0);
	lstclear(&stack->a);
	lstclear(&stack->b);
	if (flag == 1)
		exit (1);
}

int	ft_atol(t_stack *stack, const char *str, int sign, long res)
{
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == 45)
		sign = -1;
	if (*str == 43 || *str == 45)
		str++;
	while (48 <= *str && *str <= 57)
		res = res * 10 + *str++ - 48;
	if (res * sign < -2147483648 || res * sign > 2147483647)
		return (write(2, "Error\n", 6), ft_error(stack, 1), 0);
	return (res * sign);
}

void	ft_lstclear(t_lst **lst)
{
	t_lst	*nbrs;

	if (!lst)
		return ;
	while (*lst)
	{
		nbrs = (*lst);
		*lst = (*lst)->nx;
		free(nbrs);
	}
}
