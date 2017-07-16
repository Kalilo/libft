/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 08:11:01 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 10:53:56 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;
	size_t	k;

	a = (char *)s1;
	b = (char *)s2;
	k = 0;
	while (k < n && a[k] == b[k])
		k++;
	return ((unsigned char)a[k] - (unsigned char)b[k]);
}
