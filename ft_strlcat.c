/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 17:09:57 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/13 17:06:40 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = strlen(dest);
	s = strlen(src);
	i = 0;
	if (n <= d)
		return (n + s);
	while (src[i] && d + i < n - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (n > d)
		dest[d + i] = '\0';
	return (d + s);
}
