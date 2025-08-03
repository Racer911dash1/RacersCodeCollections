/* ************************************************************************** */
/*                                                                            */
/* File:		rcc_sqrt.c                                                    */
/*                                                                            */
/* Author:		Racer911-1                                                    */
/* Created:		2025/07/25 22:13:20                                           */
/*                                                                            */
/* Modified by:	Racer911-1                                                    */
/* Modified:	2025/08/03 14:59:00                                           */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_math.h"

/**
 * @brief Return the square root of @p num.
 *
 * @param[in]	num	Number to get the square root of.
 *
 * @return The square root of @p num, or 0 on error.
 *
 * @note rcc_sqrti returns 0 if the square root of @p num is not a whole number.
 */
int32_t	rcc_sqrti(int32_t num)
{
	for (int32_t i = 1; i * i <= num; i++)
	{
		if (i * i > INT32_MAX / i)
		{
			break ;
		}
		if (i * i == num)
		{
			return (i);
		}
	}
	return (0);
}
