/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:27:14 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/06/01 18:37:17 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main(void)
{
	const char *s = "Hellaurrrrrr Friendss";
		unsigned int n = 7;
		size_t  len = 20;
		char    *temp = ft_substr(s, n, len);
		
		printf("Correct? : %s\n", temp);
}*/
