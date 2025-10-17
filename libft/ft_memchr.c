/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:24:50 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/05/31 21:26:15 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
int main() 
{
    const char *s = "Hellaurueuyeueyu";
    int c = 'u';
    size_t n = 8;

    printf("Correct : %s\n", (char *)memchr(s, c, n));
    printf("correct : %s\n", (char *)ft_memchr(s, c, n));
    return 0;
}*/
