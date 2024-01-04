/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:35:37 by myerturk          #+#    #+#             */
/*   Updated: 2024/01/05 00:12:04 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/ft_printf.h"

void	swap(t_lst **stack)
{
	t_lst	*first;
	t_lst	*second;

	if (!(*stack) || !(*stack)->nx)
		return ;
	first = *stack;
	second = (*stack)->nx;
	first->nx = second->nx;
	second->nx = first;
	*stack = second;
}

void	sa(t_lst **a, int print)
{
	if (stacksize(*a) > 1)
	{
		swap(a);
		if (print)
			ft_printf("sa\n");
	}
}

void	sb(t_lst **b, int print)
{
	if (stacksize(*b) > 1)
	{
		swap(b);
		if (print)
			ft_printf("sb\n");
	}
}

void	ss(t_lst **a, t_lst **b, int print)
{
	sa(a, 0);
	sb(b, 0);
	if (print)
		ft_printf("ss\n");
}
