/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 17:21:45 by tmack             #+#    #+#             */
/*   Updated: 2016/06/24 12:05:57 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "libft/libft.h"

typedef struct	s_stack
{

	int		*content;
	int		top;
	int		max_size;
}				t_stack;

/*
** stack sort functions
*/
void			stack_ra(t_stack *stack_a);
void            stack_rrb(t_stack *stack_b);
void			stack_rra(t_stack *stack_a);
void			stack_sa(t_stack *stack);
void			stack_sb(t_stack *stack);
void			stack_ss(t_stack *stacka, t_stack *stackb);
void			stack_pa(t_stack *stack_a, t_stack *stack_b);
void			stack_pb(t_stack *stack_a, t_stack *stack_b);
/*
** stack functions
*/
void			stack_fill(t_stack *stack, char **argv);
int				stack_peek(t_stack *stack);
int				stack_is_empty(t_stack *stack);
void			stack_destroy(t_stack *stack);
void			stack_init(t_stack *stack, int max_size);
int				stack_is_full(t_stack *stack);
void			stack_push(t_stack *stack, int element);
char			stack_pop(t_stack *stack);

#endif
