/* ************************************************************************** */
/*                                                                            */
/* File:        rcc_strtrim.c                                                 */
/*                                                                            */
/* Author:      Racer911-1                                                    */
/* Created:     2025/08/16 22:47:47                                           */
/*                                                                            */
/* Modified by: Racer911-1                                                    */
/* Modified:    2025/08/17 11:29:10                                           */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"
#include <stdio.h>

/**
 * @brief Create a new string by trimming the start and end of @p str, removing
 * any characters found in @p set, and null terminate it.
 *
 * If either argument is NULL, then the function will also return NULL.
 *
 * @param[in]	str	The string to trim.
 * @param[in]	set The set of characters to trim from @p str.
 *
 * @return Pointer to the newly allocated trimmed string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_strtrim(const char *str, const char *set)
{
	char	*trimmed;
	int32_t	start;
	int32_t	end;
	int32_t	strlen;

	if (str == NULL || set == NULL)
	{
		return (NULL);
	}
	start = 0;
	strlen = rcc_strlen(str);
	end = strlen;
	while (rcc_strchr(set, str[start]) != NULL && start < strlen)
	{
		start++;
	}
	while (rcc_strchr(set, str[end]) != NULL && end >= 0)
	{
		end--;
	}
	if (end < start)
	{
		return (rcc_calloc(1, sizeof(char)));
	}
	trimmed = rcc_calloc(end - start + 2, sizeof(char));
	if (trimmed == NULL)
	{
		return (NULL);
	}
	return (rcc_memcpy(trimmed, str + start, end - start + 1));
}

/**
 * @brief Create a new string by trimming the start of @p str, removing
 * any characters found in @p set, and null terminate it.
 *
 * If either argument is NULL, then the function will also return NULL.
 *
 * @param[in]	str	The string to trim.
 * @param[in]	set	The set of characters to trim from @p str.
 *
 * @return Pointer to the newly allocated trimmed string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_strtrimstart(const char *str, const char *set)
{
	char	*trimmed;
	size_t	start;
	size_t	strlen;

	if (str == NULL || set == NULL)
	{
		return (NULL);
	}
	start = 0;
	strlen = rcc_strlen(str);
	while (rcc_strchr(set, str[start]) != NULL && start < strlen)
	{
		start++;
	}
	if (strlen == start)
	{
		return (rcc_calloc(1, sizeof(char)));
	}
	trimmed = rcc_calloc(strlen - start + 1, sizeof(char));
	if (trimmed == NULL)
	{
		return (NULL);
	}
	return (rcc_memcpy(trimmed, str + start, strlen - start));
}

/**
 * @brief Create a new string by trimming the start of @p str,
 * matching @p prefix, and null terminate it.
 *
 * If either argument is NULL, then the function will also return NULL.
 *
 * @param[in]	str		The string to trim.
 * @param[in]	prefix	The prefix to trim from @p str.
 *
 * @return Pointer to the newly allocated trimmed string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_strtrimprefix(const char *str, const char *prefix)
{
	char	*trimmed;
	size_t	prefixlen;
	size_t	strlen;

	if (str == NULL || prefix == NULL)
	{
		return (NULL);
	}
	prefixlen = rcc_strlen(prefix);
	strlen = rcc_strlen(str);
	if (rcc_strncmp(str, prefix, prefixlen) != 0)
	{
		return (NULL);
	}
	trimmed = rcc_calloc(strlen - prefixlen + 1, sizeof(char));
	if (trimmed == NULL)
	{
		return (NULL);
	}
	return (rcc_memcpy(trimmed, str + prefixlen, strlen - prefixlen));
}

/**
 * @brief Create a new string by trimming the end of @p str, removing
 * any characters found in @p set, and null terminate it.
 *
 * If either argument is NULL, then the function will also return NULL.
 *
 * @param[in]	str	The string to trim.
 * @param[in]	set	The set of characters to trim from @p str.
 *
 * @return Pointer to the newly allocated trimmed string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_strtrimend(const char *str, const char *set)
{
	char	*trimmed;
	int32_t	end;
	size_t	trimmedlen;

	if (str == NULL || set == NULL)
	{
		return (NULL);
	}
	end = rcc_strlen(str);
	while (rcc_strchr(set, str[end]) != NULL && end >= 0)
	{
		end--;
	}
	if (end < 0)
	{
		return (rcc_calloc(1, sizeof(char)));
	}
	trimmedlen = rcc_strnlen(str, end) + 1;
	trimmed = rcc_calloc(trimmedlen, sizeof(char));
	if (trimmed == NULL)
	{
		return (NULL);
	}
	return (rcc_memcpy(trimmed, str, trimmedlen));
}

/**
 * @brief Create a new string by trimming the end of @p str,
 * matching @p suffix, and null terminate it.
 *
 * If either argument is NULL, then the function will also return NULL.
 *
 * @param[in]	str		The string to trim.
 * @param[in]	suffix	The suffix to trim from @p str.
 *
 * @return Pointer to the newly allocated trimmed string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_strtrimsuffix(const char *str, const char *suffix)
{
	char	*trimmed;
	size_t	suffixlen;
	size_t	strlen;

	if (str == NULL || suffix == NULL)
	{
		return (NULL);
	}
	suffixlen = rcc_strlen(suffix);
	strlen = rcc_strlen(str);
	if (rcc_strncmp(str + strlen - suffixlen, suffix, suffixlen) != 0)
	{
		return (NULL);
	}
	trimmed = rcc_calloc(strlen - suffixlen + 1, sizeof(char));
	if (trimmed == NULL)
	{
		return (NULL);
	}
	return (rcc_memcpy(trimmed, str, strlen - suffixlen));
}
