/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 10:43:41 by tmack             #+#    #+#             */
/*   Updated: 2016/06/24 14:41:14 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	set_stack_b(t_stack *stack_b, t_stack *stack_a)
{
	int i;

	i = 0;
	while (i < stack_a->max_size)
	{
		stack_b->content[i] = -1;
		i++;
	}
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int i;

	i = 0;
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_init(stack_a, argc);
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	stack_init(stack_b, argc);
	stack_fill(stack_a, argv);
	set_stack_b(stack_b, stack_a);
	stack_ra(stack_a);
	ft_putstr("Popped characters are: \n");
	while (i <= stack_a->top)
	{

		ft_putstr(ft_itoa(stack_a->content[i]));
		ft_putchar('\n');
		i++;
	}
/*	i = 0;
	stack_pb(stack_a, stack_b);
		ft_putstr("------------------\n");
	while (i < stack_b->max_size - 1 && stack_b->content[i] != -1)
	{
		ft_putstr(ft_itoa(stack_b->content[i]));
		ft_putchar('\n');
		i++;
	}*/
	stack_destroy(stack_a);
}
