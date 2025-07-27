/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_variadic_arithmetic.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:21:23 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/27 12:02:43 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_math.h"

/**
 * @brief Compute the remainder from a sequence of integers.
 *
 * @param[in]	nums	Amount of int32_t values to process.
 * @param[in]	...		A varadic list of int32_t values.
 *
 * @returns The computed remainder, or 0 on error.
 *
 * @warning	All variadic arguments must be of type int32_t. Behaviour is otherwise
 * 			undefined.
 *
 * @note No overflow checks are performed. Returns 0 if division by zero is performed.
 */
int32_t	rcc_vmodulo(size_t nums, ...)
{
	int32_t	remainder;
	int32_t	next_number;
	va_list	args;

	va_start(args, nums);
	if (nums-- > 0)
	{
		remainder = va_arg(args, int32_t);
	}
	for (size_t i = 0; i < nums; i++)
	{
		next_number = va_arg(args, int32_t);
		if (next_number == 0)
		{
			va_end(args);
			return(0);
		}
		remainder %= next_number;
	}
	va_end(args);
	return (remainder);
}

/**
 * @brief Compute the sum from a sequence of integers.
 *
 * @param[in]	nums	Amount of int32_t values to process.
 * @param[in]	...		A varadic list of int32_t values.
 *
 * @returns The computed sum, or 0 on error.
 *
 * @warning	All variadic arguments must be of type int32_t. Behaviour is otherwise
 * 			undefined.
 *
 * @note No overflow checks are performed.
 */
int32_t	rcc_vaddi(size_t nums, ...)
{
	int32_t	sum = 0;
	va_list	args;

	va_start(args, nums);
	for (size_t i = 0; i < nums; i++)
	{
		sum += va_arg(args, int32_t);
	}
	va_end(args);
	return (sum);
}

/**
 * @brief Compute the difference from a sequence of integers.
 *
 * @param[in]	nums	Amount of int32_t values to process.
 * @param[in]	...		A varadic list of int32_t values.
 *
 * @returns The computed difference, or 0 on error.
 *
 * @warning	All variadic arguments must be of type int32_t. Behaviour is otherwise
 * 			undefined.
 *
 * @note No overflow checks are performed.
 */
int32_t	rcc_vsubtracti(size_t nums, ...)
{
	int32_t	difference = 0;
	va_list	args;

	va_start(args, nums);
	if (nums-- > 0)
	{
		difference = va_arg(args, int32_t);
	}
	for (size_t i = 0; i < nums; i++)
	{
		difference -= va_arg(args, int32_t);
	}
	va_end(args);
	return (difference);
}

/**
 * @brief Compute the product from a sequence of integers.
 *
 * @param[in]	nums	Amount of int32_t values to process.
 * @param[in]	...		A varadic list of int32_t values.
 *
 * @returns The computed product, or 0 on error.
 *
 * @warning	All variadic arguments must be of type int32_t. Behaviour is otherwise
 * 			undefined.
 *
 * @note No overflow checks are performed.
 */
int32_t	rcc_vmultiplyi(size_t nums, ...)
{
	int32_t	product = 1;
	va_list	args;

	va_start(args, nums);
	for (size_t i = 0; i < nums; i++)
	{
		product *= va_arg(args, int32_t);
	}
	va_end(args);
	return (product);
}

/**
 * @brief Compute the quotient from a sequence of integers.
 *
 * @param[in]	nums	Amount of int32_t values to process.
 * @param[in]	...		A varadic list of int32_t values.
 *
 * @returns The computed quotient, or 0 on error.
 *
 * @warning	All variadic arguments must be of type int32_t. Behaviour is otherwise
 * 			undefined.
 *
 * @note No overflow checks are performed. Returns 0 if division by zero is performed.
 */
int32_t	rcc_vdividei(size_t nums, ...)
{
	int32_t	quotient;
	int32_t	next_number;
	va_list	args;

	va_start(args, nums);
	if (nums-- > 0)
	{
		quotient = va_arg(args, int32_t);
	}
	for (size_t i = 0; i < nums; i++)
	{
		next_number = va_arg(args, int32_t);
		if (next_number == 0)
		{
			va_end(args);
			return (0);
		}
		quotient /= next_number;
	}
	va_end(args);
	return (quotient);
}