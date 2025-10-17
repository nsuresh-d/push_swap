/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:26:30 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/05/31 20:13:59 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (src[i] != '\0' && i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main(void)
{
	char src[] = "HELL YESS";
	char dest[20];
	size_t	res;

	res = ft_strlcpy(dest, src, 10);
	printf("Copied string : %s\n", dest);
	printf("Return value : %zu\n", res);
	return (0);
}*/