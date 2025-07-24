/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_isthing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:01:49 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/24 17:27:07 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/rcc_string.h"

/**
 * @brief Check if @p c is alphanumeric.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is alphanumeric, or false otherwise.
 */
bool rcc_isalnum(int c)
{
	return (rcc_isalpha(c) || rcc_isdigit(c));
}

/**
 * @brief Check if @p c is alphabetic.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is alphabetic, or false otherwise.
 */
bool rcc_isalpha(int c)
{
	return (rcc_islower(c) || rcc_isupper(c));
}

/**
 * @brief Check if @p c is a control character.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is a control character, or false otherwise.
 */
bool rcc_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || c == 127);
}

/**
 * @brief Check if @p c is a digit.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is a digit, or false otherwise.
 */
bool rcc_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * @brief Check if @p c is a non-space printable character.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is a non-space printable character, or false otherwise.
 */
bool rcc_isgraph(int c)
{
	return (c >= '!' && c <= '~');
}

/**
 * @brief Check if @p c is lowercase.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is lowercase, or false otherwise.
 */
bool rcc_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * @brief Check if @p c is a printable character.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is a printable character, or false otherwise.
 */
bool rcc_isprint(int c)
{
	return (rcc_isgraph(c) || c == ' ');
}

/**
 * @brief Check if @p c is not an alphanumeric or space character.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is not an alphanumeric or space character, or false otherwise.
 */
bool rcc_ispunct(int c)
{
	return (!rcc_isalnum(c) || c == ' ');
}

/**
 * @brief Check if @p c is a whitespace.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is a whitespace, or false otherwise.
 */
bool rcc_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

/**
 * @brief Check if @p c is uppercase.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is uppercase, or false otherwise.
 */
bool rcc_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * @brief Check if @p c is a hexadecimal digit.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is a hexadecimal digit, or false otherwise.
 */
bool rcc_isxdigit(int c)
{
	return (rcc_isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}

/**
 * @brief Check if @p c is an ascii character.
 *
 * It will check whether @p c is a 7-bit unsigned char value.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is an ascii character, or false otherwise.
 */
bool rcc_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/**
 * @brief Check if @p c is a space or a tab.
 *
 * @param[in]	c	Character to check.
 *
 * @returns true if @p c is a space or a tab, or false otherwise.
 */
bool rcc_isblank(int c)
{
	return (c == ' ' || c == '\t');
}
