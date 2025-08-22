<<<<<<< HEAD
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

=======
>>>>>>> f342415d3b855e5c49965b09a9e7c02f940608fa
#include "rcc_string.h"

/**
<<<<<<< HEAD
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
=======
 * @brief Count the amount of words in @p str along each delimiter character.
 *
 * Repeated delimiters will be treated as a single character.
 *
 * @param[in]	str			The string to count the words from.
 * @param[in]	delimiter	The delimiter character to split the string with.
 *
 * @return The amount of words found inside @p str.
 */
static size_t	rcc_count_words(const char *str, const char delimiter)
{
	bool	is_word = false;
	size_t	word_count = 0;
>>>>>>> f342415d3b855e5c49965b09a9e7c02f940608fa

	for (size_t i = 0; str[i]; i++)
	{
		if (is_word == false && str[i] != delimiter)
		{
			is_word = true;
			word_count++;
			is_word = true;
		}
		else if (is_word == true && str[i] == delimiter)
		{
			is_word = false;
		}
		if (is_word == true && str[i] == delimiter)
		{
			is_word = false;
		}
	}
	return (word_count);
}

/**
<<<<<<< HEAD
 * @brief Count the length of a word in @p str until it reaches a @p delimiter.
 *
 * @param[in]	str			The string to count the length of a word from.
 * @param[in]	delimiter	The delimiter up until which will be counted to.
 *
 * @return The length of the word.
=======
 * @brief The length of @p str until it reaches a @p delimiter character.
 *
 * @param[in]	str			The string to find the first occurence of @p delimiter.
 * @param[in]	delimiter	The stopping point for @p str to iterate.
 *
 * @return The length of @p str until the @p delimiter character.
>>>>>>> f342415d3b855e5c49965b09a9e7c02f940608fa
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
 * @brief Create an array of pointers by splitting @p str along each @p delimiter character.
 *
<<<<<<< HEAD
 * Repeated delimiters inside of @p str will be treated as a single delimiter.
 * Should @p str not contain any words, will it return NULL.
=======
 * Repeated delimiters inside of @p str will be treated as a single character.
>>>>>>> f342415d3b855e5c49965b09a9e7c02f940608fa
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
