#include "rcc_string.h"

/**
 * @brief Calculate the length of @p str excluding the terminating null byte.
 *
 * @param[in]	str	The string to get the length of.
 *
 * @return The length of @p str.
 */
size_t	rcc_strlen(const char *str)
{
	size_t	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * @brief	Calculate at most the length of @p str in @p maxlen excluding the
 * 			terminating null byte.
 *
 * @param[in]	str		The string to get the length of.
 * @param[in]	maxlen	The maximum length to return.
 *
 * @return The length of @p if less than @p maxlen, or maxlen.
 */
size_t	rcc_strnlen(const char *str, size_t maxlen)
{
	size_t	i = 0;

	while (str[i] && i < maxlen)
	{
		i++;
	}
	return (i);
}