/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:22:36 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/06/01 18:28:18 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;	

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > ((size_t) - 1) / size)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}
/*
int main(void)
{
	char *str = malloc(10 * sizeof(char));

	str[0] = 'S';
	str[1] = 'a';
	str[2] = 'l';
	str[3] = 'a';
	str[4] = 'h';
	str[5] = 'h';
	str[6] = '\0';

	printf("%s\n", str);
	free(str);
	return (0);

}*/