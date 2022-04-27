/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:11:43 by jonathan          #+#    #+#             */
/*   Updated: 2022/04/27 09:05:30 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "t_int.h"

bool	ft_isprime(t_lint n)
{
	t_lint	i;

	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11)
		return (true);
	if (n < 2 || !(n % 2) || !(n % 3) || !(n % 5) || !(n % 7) || !(n % 11))
		return (false);
	i = 13;
	while (i < (n / 10))
	{
		if (!(n % i))
			return (false);
		i += 2;
	}
	return (true);
}
