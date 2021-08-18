/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 02:55:13 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:39:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <stdbool.h>
# include "type/t_int.h"

int		ft_power(int n, t_uint pow);

float	ft_sqrt(t_uint n);

bool	ft_isprime(t_lint n);

t_uint	ft_next_prime(int n);

#endif
