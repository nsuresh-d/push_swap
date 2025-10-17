/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:25:00 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/05/31 21:40:31 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
	{
		i++;
		if (i == n)
			return (0);
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
int main() 
{
	const char *str1 = "abc";
	const char *str2 = "abz";
	size_t n = 3;

	printf("Correct : %d\n", memcmp(str1, str2, n));
	printf("Correct? : %d\n", ft_memcmp(str1, str2, n));
	return 0;
}*/