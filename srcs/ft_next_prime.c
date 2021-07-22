/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:24:35 by jonathan          #+#    #+#             */
/*   Updated: 2021/07/21 02:56:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_uint	ft_next_prime(int n)
{
	t_uint	next_prime;

	if (n < 2)
		return (2);
	else
	{
		if (ft_isprime(n))
			return (n);
		next_prime = n;
		if (!(next_prime % 2))
			++next_prime;
		else
			next_prime += 2;
		while (!ft_isprime(next_prime))
			next_prime += 2;
		return (next_prime);
	}
}
