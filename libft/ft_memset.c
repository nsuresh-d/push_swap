/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:25:17 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/06/01 00:10:58 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char buffer[10];
	int	i;

	ft_memset(buffer, 'L', 10);

	i = 0;
	while (i < 10)
	{
		printf("%c", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
