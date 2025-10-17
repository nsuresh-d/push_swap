/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:26:17 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/05/31 22:53:12 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dl;
	size_t	sl;

	dl = 0;
	while (dl < size && dest[dl] != '\0')
		dl++;
	sl = 0;
	while (src[sl] != '\0')
		sl++;
	if (dl == size)
		return (size + sl);
	i = dl;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dl + sl);
}
/*
int main(void)
{
    char dest[20] = "HELL";
    const char *src = " YESSS";

    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("Concatenated: %s\n", dest);
    printf("Return value: %zu\n", result);

    return 0;
}*/