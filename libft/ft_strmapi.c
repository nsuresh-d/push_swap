/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:26:50 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/05/31 22:46:09 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*new;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
char	help(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	return (c);
}
int main()
{
	const char *s = "abcdefg";
	char *result = ft_strmapi(s, help);

	if (result)
	{
		printf("original : %s\n", s);
		printf("Mapped : %s\n", result);
		free(result);

	}
	return (0);
}*/
