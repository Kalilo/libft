/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 08:13:31 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 10:59:45 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			k;
	unsigned char	*temp;

	k = 0;
	temp = (unsigned char *)s;
	if (c < 0)
		c = 256 - c;
	while (k < n)
	{
		temp[k] = c;
		k++;
	}
	return (s);
}*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			k;
	unsigned char	*src;

	k = 0;
	src = (char *)s;
	while (k < n)
	{
		src[k] = (unsigned int)k;
		k++;
	}
	return (src);
}
