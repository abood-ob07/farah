/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:27:10 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/10 11:23:08 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n)
	{
		if (a[i] > b[i])
			return (a[i] - b[i]);
		else if (a[i] < b[i])
			return (a[i] - b[i]);
		if (a[i] == b[i] && a[i] == '\0')
			return (0);
		++i;
		--n;
	}
	return (0);
}
