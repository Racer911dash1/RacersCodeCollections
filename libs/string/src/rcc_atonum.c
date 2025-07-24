/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_atonum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:56:44 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/24 16:43:38 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/rcc_string.h"

/**
 * @brief Convert @p str to an int.
 *
 * @param[in]	str	The String to convert.
 *
 * @returns The converted value, or 0 on error.
 *
 * @note	rcc_atoi does not detect valid input or overflow.
 */
int32_t	rcc_atoi(const char *str)
{
	int32_t	number = 0;
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

/**
 * @brief Convert @p str to a long.
 *
 * @param[in]	str	The String to convert.
 *
 * @returns The converted value, or 0 on error.
 *
 * @note	rcc_atol does not detect valid input or overflow.
 */
int64_t	rcc_atol(const char *str)
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

#include <stdio.h>

/**
 * @brief Convert @p str to a double.
 *
 * This function is currently rather dubious in its output,
 * but seems to work with reasonably small numbers.
 *
 * @param[in]	str	The String to convert.
 *
 * @returns The converted value, or 0 on error.
 *
 * @note	rcc_atod does not detect valid input or overflow.
 */
double	rcc_atod(const char *str)
{
	double	number = 0;
	double	fraction = 0;
	double	fract_pos = 10;
	int32_t	i = 0;
	int8_t	sign = 1;
	bool	dot_found = false;

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
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] == '.' && dot_found == false))
	{
		if (str[i] == '.')
		{
			dot_found = true;
			i++;
			break ;
		}
		else
		{
			number = number * 10 + str[i++] - '0';
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		fraction = (str[i++] - '0') / fract_pos;
		number = number + fraction;
		fract_pos *= 10;
	}
	return (number * sign);
}
