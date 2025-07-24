/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:25:25 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/25 00:15:50 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/rcc_string.h"

/**
 * @brief Find the first occurrence of @p c in @p str.
 *
 * This includes the Null terminator.
 *
 * @param[in]	str	String to iterate through.
 * @param[in]	c	Character to find in @p str.
 *
 * @returns Pointer to the first occurrence of str, or NULL on failure.
 */
char	*rcc_strchr(const char *str, int c)
{
	int32_t	i = 0;
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
 * @brief Find the first occurrence of @p c in @p str.
 *
 * This includes the Null terminator.
 *
 * @param[in]	str	String to iterate through.
 * @param[in]	c	Character to find in @p str.
 *
 * @returns Pointer to the first occurrence of str, or pointer to the null byte.
 */
char	*rcc_strchrnul(const char *str, int c)
{
	int32_t	i = 0;
	char	*cpystr = (char *)str;

	while (cpystr[i] && cpystr[i] != c)
	{
		i++;
	}
	return (cpystr + i);
}
