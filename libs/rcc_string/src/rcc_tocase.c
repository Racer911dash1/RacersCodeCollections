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
