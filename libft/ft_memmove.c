/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:25:13 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/06/01 00:22:20 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	unsigned char		*dst;
	const unsigned char	*src;
	size_t				i;

	if (!dest && !source)
		return (NULL);
	dst = (unsigned char *)dest;
	src = (const unsigned char *)source;
	if (dst > src)
		while (len--)
			dst[len] = src[len];
	else
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
    char str[20] = "HELL YESSSSSS";

    ft_memmove(str + 7, str, 6);
    printf("Result: %s\n", str);

    return 0;
}*/
