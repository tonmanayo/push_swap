/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 16:57:38 by tmack             #+#    #+#             */
/*   Updated: 2016/06/24 10:24:04 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void    stack_sa(t_stack *stack)
{
	int         temp2;
	int         temp1;

	temp1 = stack_pop(stack);
	temp2 = stack_pop(stack);
	stack_push(stack, temp1);
	stack_push(stack, temp2);
}

void	stack_sb(t_stack *stack)
{
	stack_sa(stack);
}

void	stack_ss(t_stack *stack_a, t_stack *stack_b)
{
	stack_sa(stack_a);
	stack_sb(stack_b);
}

void	stack_pa(t_stack *stack_a, t_stack *stack_b)
{
	stack_push(stack_a, stack_pop(stack_b));
}

void	stack_pb(t_stack *stack_a, t_stack *stack_b)
{
	stack_pa(stack_b, stack_a);
}

