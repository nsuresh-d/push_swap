/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:25:46 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/05/31 20:36:54 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
}
/*
int main (void)
{
	const char *str = "HEll Yess Yoooo mamaaa";
	int	c = 'Y';

	char *correct = strchr (str, c);
	char *mine = ft_strchr(str, c);
	
	printf("correct : %s\n", correct);
	printf("correct : %s\n", mine);
	return (0);

}*/
