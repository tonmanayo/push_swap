/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rules2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 10:23:14 by tmack             #+#    #+#             */
/*   Updated: 2016/06/24 14:41:08 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_rra(t_stack *stack_a)
{
	t_stack *temp;
	int last;
	int i;

	i = 1;
	temp = stack_a;
	while (!stack_is_empty(stack_a) )
		last = stack_pop(stack_a);
	while (i < stack_a->max_size)
	{
		if (i == stack_a->max_size - 1)
		{
			stack_push(stack_a, last);
			break ;
		}
		stack_push(stack_a, temp->content[i]);
		i++;
	}
}

void    stack_rrb(t_stack *stack_b)
{
	stack_rra(stack_b);
}


void	stack_ra(t_stack *stack_a)
{
	t_stack *temp;
	int i;
	int j;
	int last;

	j = 0;
	i = -1;
	temp = (t_stack *)malloc(sizeof(t_stack));
	temp->content = (int *)malloc(sizeof(int) * 1000);
	temp = stack_a;
	last = stack_pop(stack_a);
	while (!stack_is_empty(stack_a))
		stack_pop(stack_a);

	while (i++ < temp->max_size - 1)
	{
		if (i == 0)
		{
			i++;
			stack_push(stack_a, last);	
			continue ;
		}
	 ft_putstr(ft_itoa(i));
		stack_push(stack_a, temp->content[j]);
		j++;
	//	i++;
	}
}
