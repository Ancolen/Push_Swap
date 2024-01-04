/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:35:22 by myerturk          #+#    #+#             */
/*   Updated: 2024/01/05 00:11:56 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/ft_printf.h"

void	ra(t_lst **a, int print)
{
	if (stacksize(*a) > 1)
	{
		rotate(a);
		if (print)
			ft_printf("ra\n");
	}
}

void	rb(t_lst **b, int print)
{
	if (stacksize(*b) > 1)
	{
		rotate(b);
		if (print)
			ft_printf("rb\n");
	}
}

void	rr(t_lst **a, t_lst **b, int print)
{
	ra(a, 0);
	rb(b, 0);
	if (print)
		ft_printf("rr\n");
}

void	rotate(t_lst **stack)
{
	t_lst	*first;
	t_lst	*last;

	if (!(*stack) || !(*stack)->nx)
		return ;
	first = *stack;
	last = *stack;
	while (last->nx != NULL)
		last = last->nx;
	*stack = (*stack)->nx;
	last->nx = first;
	first->nx = NULL;
}
