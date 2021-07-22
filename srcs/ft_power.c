/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:09 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/21 03:04:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typedefs/t_int.h"

int	ft_power(int n, t_uint pow)
{
	if (pow == 0)
		return (1);
	else if (pow == 1)
		return (n);
	else
		return (n * ft_power(n, --pow));
}
