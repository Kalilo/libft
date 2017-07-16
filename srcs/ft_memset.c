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

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			k;
	unsigned char	*src;

	k = 0;
	src = (unsigned char *)s;
	while (k < n)
	{
		src[k] = (unsigned int)c;
		k++;
	}
	return (src);
}
