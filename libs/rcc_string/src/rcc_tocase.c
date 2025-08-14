/* ************************************************************************** */
/*                                                                            */
/* File:        rcc_tocase.c                                                  */
/*                                                                            */
/* Author:      Racer911-1                                                    */
/* Created:     2025/08/02 21:02:08                                           */
/*                                                                            */
/* Modified by: Racer911-1                                                    */
/* Modified:    2025/08/14 23:01:57                                           */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"

/**
 * @brief Return the lowercase equivalent of @p c.
 *
 * @param[in]	c	An uppercase alphabetical character.
 *
 * @return The lowercase equivalent of @p c.
 */
int32_t	rcc_tolower(int32_t c)
{
	if (rcc_isupper(c))
	{
		c += 32;
	}
	return (c);
}

/**
 * @brief Return the uppercase equivalent of @p c.
 *
 * @param[in]	c	A lowercase alphabetical character.
 *
 * @return The uppercase equivalent of @p c.
 */
int32_t	rcc_toupper(int32_t c)
{
	if (rcc_islower(c))
	{
		c -= 32;
	}
	return (c);
}
