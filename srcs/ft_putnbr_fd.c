/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:22:40 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 11:05:05 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		k;

	if (n == 0)
		write(fd, "0", 1);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	k = 1;
	while (n % k != n)
		k = 10 * k;
	while (n > 0)
	{
		c = (n / (k / 10)) + '0';
		n = n - ((n / (k / 10)) * (k / 10));
		k = k / 10;
		write(fd, &c, 1);
	}
}
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	*num;

	num = ft_itoa(n);
	ft_putstr_fd(n, fd);
	free(num);
}
