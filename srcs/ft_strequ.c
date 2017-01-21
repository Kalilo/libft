/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:13:56 by khansman          #+#    #+#             */
/*   Updated: 2016/05/14 14:27:09 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_strequ(char const *s1, char const *s2)
{
	int	k;

	k = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
			return (0);
		k++;
	}
	if (s1[k] != '\0' || s2[k] != '\0')
		return (0);
	return (1);
}
*/
int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}
