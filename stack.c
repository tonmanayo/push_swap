/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 09:48:13 by tmack             #+#    #+#             */
/*   Updated: 2016/06/24 11:13:13 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_init(t_stack *stack, int max_size)
{
	int		*nstack;

	nstack = (int *)malloc(sizeof(t_stack) * max_size);
	if (nstack == NULL)
	{
		ft_putstr("Insufficient memory to initialize stack.\n");
		exit(1);
	}
	stack->content = nstack;
	stack->max_size = max_size;
	stack->top = -1;
}

void	stack_destroy(t_stack *stack)
{
	free(stack->content);
	stack->content = NULL;
	stack->max_size = 0;
	stack->top = -1;
}

int		stack_is_full(t_stack *stack)
{
	return (stack->top >= stack->max_size - 1);
}

void	stack_push(t_stack *stack, int element)
{
	if (stack_is_full(stack))
	{
		ft_putstr("Can't push element on stack: stack is full.\n");
		exit(1);
	}
	stack->content[++stack->top] = element;
}

char	stack_pop(t_stack *stack)
{
	if (stack_is_empty(stack))
	{
		ft_putstr("Can't pop element from stack: stack is empty.\n");
		exit(1);
	}
	return (stack->content[stack->top--]);
}
