/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 17:16:38 by tmack             #+#    #+#             */
/*   Updated: 2016/06/24 11:00:12 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		stack_is_empty(t_stack *stack)
{
	return (stack->top < 0);
}

void    stack_fill(t_stack *stack, char **argv)
{
	int i;

	i = stack->max_size - 1;
	while (i > 0)
		stack_push(stack, ft_atoi(argv[i--]));
}
