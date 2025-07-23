/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:56:44 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/23 20:54:48 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/rcc_string.h"

int32_t	rcc_atoi(const char *str)
{
	int64_t	number = 0;
	int32_t	i = 0;
	int8_t	sign = 1;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i++] - '0';
	}
	return (number * sign);
}
