/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_charset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:01:38 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/26 09:50:24 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/rcc_string.h"

/**
 * @brief Write @p bytes amount of zeros pointed to by @p buffer.
 *
 * @param[in,out]	buffer	Pointed area to fill.
 * @param[in]		bytes	Amount of zeros to write.
 *
 * @returns Pointer to the zerod memory area.
 */
void	*rcc_bzero(void *buffer, size_t bytes)
{
	for (size_t i = 0; i < bytes; i++)
	{
		((unsigned char *)buffer)[i] = 0;
	}
	return (buffer);
}

/**
 * @brief Write @p bytes amount of @p c pointed to by @p buffer.
 *
 * @param[in,out]	buffer	Pointed area to fill.
 * @param[in]		c		Character to fill @p buffer with.
 * @param[in]		bytes	Amount of @p c to write.
 *
 * @returns Pointer to the memory area filled with @p c characters.
 */
void	*rcc_memset(void *buffer, int c, size_t bytes)
{
	for (size_t i = 0; i < bytes; i++)
	{
		((unsigned char *)buffer)[i] = c;
	}
	return (buffer);
}
