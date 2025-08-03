/* ************************************************************************** */
/*                                                                            */
/* File:		rcc_strdup.c                                                  */
/*                                                                            */
/* Author:		Racer911-1                                                    */
/* Created:		2025/07/27 18:45:05                                           */
/*                                                                            */
/* Modified by:	Racer911-1                                                    */
/* Modified:	2025/08/03 14:57:01                                           */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"

/**
 * @brief Duplicate @p str to a new pointer memory.
 *
 * @param[in]	str	String to duplicate.
 *
 * @return Pointer to the duplicated string, or NULL or failure.
 *
 * @warning Caller is in control of free().
 */
char	*rcc_strdup(const char *str)
{
	char	*ptr = rcc_calloc(rcc_strlen(str) + 1, sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (rcc_strcpy(ptr, str));
}

/**
 * @brief Duplicate @p num bytes from @p str to a new pointer memory.
 *
 * @param[in]	str	String to duplicate.
 *
 * @return Pointer to the duplicated string, or NULL or failure.
 *
 * @warning Caller is in control of free().
 */
char	*rcc_strndup(const char *str, size_t num)
{
	char	*ptr;

	if (rcc_strlen(str) > num)
	{
		ptr = rcc_calloc(num + 1, sizeof(char));
	}
	else
	{
		ptr = rcc_calloc(rcc_strlen(str) + 1, sizeof(char));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (rcc_memcpy(ptr, str, num));
}
