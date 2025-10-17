/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:27:00 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/05/31 23:31:10 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find_me, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !n)
		return (0);
	if (find_me[0] == '\0' || find_me == str)
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] != '\0' && find_me[j] != '\0'
			&& str[i + j] == find_me[j] && (i + j < n))
		{
			j++;
		}
		if (find_me[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
/*
int main(void) 
{
    const char *s1 = "Hello yes yes yo mama";
    const char *find = "yo";
    size_t len = 20;

    printf("Correct?? : %s\n", ft_strnstr(s1, find, len));
    return 0;
}*/
