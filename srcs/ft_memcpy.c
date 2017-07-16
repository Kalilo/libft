/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 08:13:31 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 18:00:06 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_memcpy(const void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	k;

	s = (char *)src;
	d = (char *)dst;
	k = 0;
	while (k < n)
	{
		d[k] = s[k];
		k++;
	}
	return (d);
}
