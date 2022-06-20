/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_priqueue.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramat <mt15hydrangea@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:05:33 by tmuramat          #+#    #+#             */
/*   Updated: 2022/06/20 11:05:33 by tmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIQUEUE_H
# define FT_PRIQUEUE_H

# define PRIQUEUE_SUCCESS 1
# define PRIQUEUE_FAILURE 0

# include <stdio.h>
# include <stdbool.h>
# include "ft_heap.h"

typedef struct s_priqueue {
	t_heap	*heap;
}	t_priqueue;

t_priqueue	*ft_priority_queue_init(size_t cap,
				int (*cmp)(const void *, const void *));
void		ft_priority_queue_delete(t_priqueue **queue);
int			ft_priority_queue_push(t_priqueue *queue, int *data);
void		*ft_priority_queue_pop(t_priqueue *queue);
bool		ft_priority_queue_empty(t_priqueue *queue);
bool		ft_priority_queue_is_empty(t_priqueue *queue);

#endif