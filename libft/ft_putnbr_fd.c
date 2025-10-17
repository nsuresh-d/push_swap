/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:25:31 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/05/31 19:43:48 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l *= -1;
	}
	if (l > 9)
		ft_putnbr_fd(l / 10, fd);
	ft_putchar_fd(l % 10 + '0', fd);
}
