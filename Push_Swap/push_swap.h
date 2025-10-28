/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:54:08 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/09/24 19:54:08 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	int					above_median;
	int					cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

int				error_syntax(char *str);
int				error_duplicate(t_stack_node *a, int n);
void			free_stack(t_stack_node **stack);
void			free_errors(t_stack_node **stack);
void			init_stack_a(t_stack_node **a, char **argv);
char			**split(char *s, char c);
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			current_index(t_stack_node *stack);
void			set_cheapest(t_stack_node *stack);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			prep_for_push(t_stack_node **stack,
					t_stack_node *top_node, char stack_name);
int				stack_len(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);
int				stack_sorted(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);

//Commands
void			sa(t_stack_node **a, int print);
void			sb(t_stack_node **b, int print);
void			ss(t_stack_node **a, t_stack_node **b, int print);
void			ra(t_stack_node **a, int print);
void			rb(t_stack_node **b, int print);
void			rr(t_stack_node **a, t_stack_node **b, int print);
void			rra(t_stack_node **a, int print);
void			rrb(t_stack_node **b, int print);
void			rrr(t_stack_node **a, t_stack_node **b, int print);
void			pa(t_stack_node **a, t_stack_node **b, int print);
void			pb(t_stack_node **b, t_stack_node **a, int print);

//algorithm
void			sort_three(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);
#endif