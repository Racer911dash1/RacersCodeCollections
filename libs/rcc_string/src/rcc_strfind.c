/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_strfind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0911/01/01 00:00:00 by                   #+#    #+#             */
/*   Updated: 2025/08/18 12:05:42 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"

/**
 * @brief Find the first occurrence of @p c in @p str, including the null terminator.
 *
 * @param[in]	str	String to search through.
 * @param[in]	c	Character to find.
 *
 * @return Pointer to the first occurrence of str, or NULL on failure.
 */
char	*rcc_strchr(const char *str, int32_t c)
{
	size_t	i = 0;
	char	*cpystr = (char *)str;

	while (cpystr[i] && cpystr[i] != c)
	{
		i++;
	}
	if (cpystr[i] == c)
	{
		return (cpystr + i);
	}
	return (NULL);
}

/**
 * @brief Find the first occurrence of @p c in @p str, including the null terminator.
 *
 * @param[in]	str	String to search through.
 * @param[in]	c	Character to find.
 *
 * @return Pointer to the first occurrence of str, or pointer to the null byte.
 */
char	*rcc_strchrnul(const char *str, int32_t c)
{
	size_t	i = 0;
	char	*cpystr = (char *)str;

	while (cpystr[i] && cpystr[i] != c)
	{
		i++;
	}
	return (cpystr + i);
}

/**
 * @brief Find the last occurrence of @p c in @p str, including the null terminator.
 *
 * @param[in]	str	String to search through.
 * @param[in]	c	Character to find.
 *
 * @return Pointer to the last occurrence of str, or NULL on failure.
 */
char	*rcc_strrchr(const char *str, int32_t c)
{
	size_t	i = 0;
	char	*cpystr = (char *)str;
	char	*last;

	while (cpystr[i])
	{
		if (cpystr[i] == c)
		{
			last = &cpystr[i];
		}
		i++;
	}
	if (*last == c)
	{
		return (last);
	}
	return (NULL);
}

/**
 * @brief Find @p little in @p big.
 *
 * @param[in]	big		String to search through.
 * @param[in]	little	String to find.
 *
 * @retval Pointer to @p big if @p little is an empty string.
 * @retval NULL if @p little is not found in @p big.
 * @retval Pointer to the first character on the first occurrence of @p little found in @p big.
 */
char	*rcc_strstr(const char *big, const char *little)
{
	size_t	i = 0;
	size_t	j = 0;

	if (little[i] == '\0')
	{
		return ((char *)big);
	}
	while (big[i])
	{
		while (big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/**
 * @brief Find @p little in @p big, ignoring case-sensitivity.
 *
 * @param[in]	big		String to search through.
 * @param[in]	little	String to find.
 *
 * @retval Pointer to @p big if @p little is an empty string.
 * @retval NULL if @p little is not found in @p big.
 * @retval Pointer to the first character on the first occurrence of @p little found in @p big.
 */
char	*rcc_strcasestr(const char *big, const char *little)
{
	size_t	i = 0;
	size_t	j = 0;

	if (little[i] == '\0')
	{
		return ((char *)big);
	}
	while (big[i])
	{
		while (little[j] && rcc_tolower(big[i + j]) == rcc_tolower(little[j]))
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/**
 * @brief Find @p little in @p big for the first @p num bytes.
 *
 * @param[in]	big		String to search through.
 * @param[in]	little	String to find.
 * @param[in]	num		Amount of characters to search.
 *
 * @retval Pointer to @p big if @p little is an empty string.
 * @retval NULL if @p little is not found in @p big.
 * @retval Pointer to the first character on the first occurrence of @p little found in @p big.
 */
char	*rcc_strnstr(const char *big, const char *little, size_t num)
{
	size_t	i = 0;
	size_t	j = 0;

	if (little[i] == '\0')
	{
		return ((char *)big);
	}
	if (rcc_strlen(little) > num)
	{
		return (NULL);
	}
	while (i < num && big[i])
	{
		while (little[j] && big[i + j] == little[j] && i + j < num)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/**
 * @brief Find @p little in @p big for the first @p num bytes, ignoring case-sensitivity.
 *
 * @param[in]	big		String to search through.
 * @param[in]	little	String to find.
 * @param[in]	num		Amount of characters to search.
 *
 * @retval Pointer to @p big if @p little is an empty string.
 * @retval NULL if @p little is not found in @p big.
 * @retval Pointer to the first character on the first occurrence of @p little found in @p big.
 */
char	*rcc_strcnasestr(const char *big, const char *little, size_t num)
{
	size_t	i = 0;
	size_t	j = 0;

	if (little[i] == '\0')
	{
		return ((char *)big);
	}
	if (rcc_strlen(little) > num)
	{
		return (NULL);
	}
	while (big[i])
	{
		while (little[j] && rcc_tolower(big[i + j]) == rcc_tolower(little[j]) && i + j < num)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
