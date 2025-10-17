/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:17:14 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/09/25 17:17:14 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *s, char c)
{
	int	count;
	int	inside_word;

	count = 0;
	while (*s != '\0')
	{
		inside_word = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			if (!inside_word)
			{
				count++;
				inside_word = 1;
			}
			s++;
		}
	}
	return (count);
}

static char	*get_next_word(char *s, char c)
{
	static int	pos = 0;
	char		*next_word;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (s[pos] == c)
		pos++;
	while ((s[pos + len] != c) && s[pos + len])
		len++;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((s[pos] != c) && s[pos])
		next_word[i++] = s[pos++];
	next_word[i] = '\0';
	return (next_word);
}

char	**split(char *s, char c)
{
	int		words_count;
	char	**words;
	int		i;

	i = 0;
	words_count = count_words(s, c);
	if (!words_count)
		exit(1);
	words = malloc(sizeof(char *) * (size_t)(words_count + 2));
	if (!words)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			words[i] = malloc(sizeof(char));
			if (!words[i])
				return (NULL);
			words[i++][0] = '\0';
			continue ;
		}
		words[i++] = get_next_word(s, c);
	}
	words[i] = NULL;
	return (words);
}
