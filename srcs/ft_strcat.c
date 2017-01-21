/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 09:00:30 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 09:05:26 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strcat(char *s1, const char *s2)
{
	ft_strcpy(&s1[ft_strlen(s1)], s2);
	return (s1);
}
*/
char	*ft_strcat(char *s1, const char *s2)
{
	int		k;
	int		l;

	k = 0;
	l = ft_strlen(s1);
	while (s2[k])
	{
		s1[k + l] = s2[k];
		k++;
	}
	s1[k + l] = '\0';
	return (s1);
}
