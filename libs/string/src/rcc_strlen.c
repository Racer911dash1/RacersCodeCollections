/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:23:41 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/25 22:44:44 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/rcc_string.h"

/**
 * @brief Calculate the length of @p str excluding the terminating null byte.
 *
 * @param[in]	str	The string to get the length of.
 *
 * @returns The length of @p str.
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