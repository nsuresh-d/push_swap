/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:26:55 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/06/01 00:19:11 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
	{
		i++;
		if (i == n)
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int     main()
{
        const char *s1 = "abc";
        const char *s2 = "abz";
        size_t n = 3;

        printf("Correct: %d\n", strncmp(s1, s2, n));
        printf("Correct?: %d\n", ft_strncmp(s1, s2, n));
		return (0);
}*/
