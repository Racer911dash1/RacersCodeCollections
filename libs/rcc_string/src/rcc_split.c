/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0911/01/01 00:00:00 by                   #+#    #+#             */
/*   Updated: 2025/08/18 11:55:46 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"
#include <stdio.h>

/**
 * @brief Count the amount of words in @p str split by each @p delimiter.
 *
 * @param[in]	str			The string to count the words from.
 * @param[in]	delimiter	The delimiter that splits @p str.
 *
 * @return The number of words found in @p str, or 0 if none are found.
 */
static size_t	rcc_count_words(const char *str, const char delimiter)
{
	size_t	word_count = 0;
	bool	is_word = false;

	for (size_t i = 0; str[i]; i++)
	{
		if (is_word == false && str[i] != delimiter)
		{
			word_count++;
			is_word = true;
		}
		else if (is_word == true && str[i] == delimiter)
		{
			is_word = false;
		}
	}
	return (word_count);
}

/**
 * @brief Count the length of a word in @p str until it reaches a @p delimiter.
 *
 * @param[in]	str			The string to count the length of a word from.
 * @param[in]	delimiter	The delimiter up until which will be counted to.
 *
 * @return The length of the word.
 */
static size_t	rcc_word_length(const char *str, const char delimiter)
{
	size_t	length = 0;

	for (size_t i = 0; str[i]; i++)
	{
		if (str[i] == delimiter)
		{
			break ;
		}
		length++;
	}
	return (length);
}

/**
 * @brief Create an array of pointers by splitting @p str along each @p delimiter.
 *
 * Repeated delimiters inside of @p str will be treated as a single delimiter.
 * Should @p str not contain any words, will it return NULL.
 *
 * @param[in]	str			The string to split.
 * @param[in]	delimiter	The delimiter that splits @p str.
 *
 * @return Pointer to the array of strings, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	**rcc_split(const char *str, const char delimiter)
{
	char	**split;
	size_t	word_count;
	size_t	length;
	size_t	word = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	word_count = rcc_count_words(str, delimiter);
	if (word_count == 0)
	{
		return (NULL);
	}
	split = malloc((word_count + 1) * sizeof(char *));
	if (split == NULL)
	{
		return (NULL);
	}
	for (size_t i = 0; str[i]; i += length)
	{
		while (str[i] == delimiter)
		{
			i++;
		}
		if (str[i] == '\0')
		{
			break ;
		}
		length = rcc_word_length(str + i, delimiter);
		split[word] = rcc_calloc(length + 1, sizeof(char));
		if (split[word] == NULL)
		{
			return (rcc_free2d((void **)split, word), NULL);
		}
		split[word] = rcc_strncpy(split[word], str + i, length);
		word++;
	}
	split[word] = NULL;
	return (split);
}
