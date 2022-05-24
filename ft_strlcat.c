/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:57:58 by eamirkha          #+#    #+#             */
/*   Updated: 2022/03/13 12:28:39 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	j;

	j = 0;
	dstlen = ft_strlen(dst) + 1;
	srclen = ft_strlen(src) + 1;
	j = dstlen - 1;
	if (dstlen > dstsize)
		return (dstsize + srclen - 1);
	while (*src && j < dstsize - 1)
	{
		dst[j++] = *src++;
	}
	dst[j] = '\0';
	return (dstlen + srclen - 2);
}
