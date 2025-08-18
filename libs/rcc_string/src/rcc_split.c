/* ************************************************************************** */
/*                                                                            */
/* File:        rcc_split.c                                                   */
/*                                                                            */
/* Author:      Racer911-1                                                    */
/* Created:     2025/08/17 16:47:27                                           */
/*                                                                            */
/* Modified by: Racer911-1                                                    */
/* Modified:    2025/08/17 21:55:05                                           */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"
#include <stdio.h>

static size_t	rcc_count_words(const char *str, const char delimiter)
{
	size_t	word_count = 1;

	for (size_t i = 0; str[i]; i++)
	{
		if (str[i] == delimiter)
		{
			word_count++;
		}
	}
	return (word_count);
}

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
			return (rcc_free2dstr(split), NULL);
		}
		split[word] = rcc_strncpy(split[word], str + i, length);
		word++;
	}
	split[word] = NULL;
	return (split);
}
