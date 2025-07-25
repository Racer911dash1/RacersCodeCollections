/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_string.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:57:10 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/25 22:39:07 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RCC_STRING_H
# define RCC_STRING_H

# include <stdint.h>
# include <stdbool.h>
# include <stddef.h>

// rcc_atonum.c
int32_t	rcc_atoi(const char *str);
int64_t	rcc_atol(const char *str);
double	rcc_atod(const char *str);
// rcc_isthing.c
bool	rcc_isalnum(int c);
bool	rcc_isalpha(int c);
bool	rcc_iscntrl(int c);
bool	rcc_isdigit(int c);
bool	rcc_isgraph(int c);
bool	rcc_islower(int c);
bool	rcc_isprint(int c);
bool	rcc_ispunct(int c);
bool	rcc_isspace(int c);
bool	rcc_isupper(int c);
bool	rcc_isxdigit(int c);
bool	rcc_isascii(int c);
bool	rcc_isblank(int c);
// rcc_strchr.c
char	*rcc_strchr(const char *str, int c);
char	*rcc_strchrnul(const char *str, int c);
char	*rcc_strrchr(const char *str, int c);
// rcc_strcpy.c
int32_t	rcc_strcmp(const char *str1, const char *str2);
int32_t	rcc_strncmp(const char *str1, const char *str2, size_t bytes);
// rcc_strlen.c
size_t	rcc_strlen(const char *str);
#endif