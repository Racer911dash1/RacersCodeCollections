#include "rcc_string.h"

/**
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

	for (size_t i = 0; str[i]; i++)
	{
		if (is_word == false && str[i] != delimiter)
		{
			is_word = true;
			word_count++;
		}
		if (is_word == true && str[i] == delimiter)
		{
			is_word = false;
		}
	}
	return (word_count);
}

/**
 * @brief The length of @p str until it reaches a @p delimiter character.
 *
 * @param[in]	str			The string to find the first occurence of @p delimiter.
 * @param[in]	delimiter	The stopping point for @p str to iterate.
 *
 * @return The length of @p str until the @p delimiter character.
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
 * Repeated delimiters inside of @p str will be treated as a single character.
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
