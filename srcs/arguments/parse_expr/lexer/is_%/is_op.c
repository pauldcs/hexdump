/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:33:48 by pducos            #+#    #+#             */
/*   Updated: 2022/11/05 18:36:22 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_op(char c)
{
	return (c == '+'
		|| c == '-'
		|| c == '*'
		|| c == '^'
		|| c == '/'
		|| c == '%');
}