/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 21:22:06 by jabadie           #+#    #+#             */
/*   Updated: 2015/07/28 21:53:57 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include "string.h"
#include "stdlib.h"
#include "unistd.h"

typedef struct	s_list_ch
{
	char 				*str;
	struct s_list_ch	*next;
}				t_list_ch;

t_list_ch	*new_list_ch(char *str);

#endif
