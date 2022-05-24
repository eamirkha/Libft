/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:06:18 by eamirkha          #+#    #+#             */
/*   Updated: 2022/03/30 16:26:58 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*haystack1;

	i = 0;
	haystack1 = (char *)haystack;
	if (needle[0] == '\0')
		return (haystack1);
	while (haystack1[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack1[i + j] != '\0' && i + j < len)
		{
			if (haystack1[i + j] == needle[j])
				j++;
			else
				break ;
			if (needle[j] == '\0')
				return (&haystack1[i]);
		}
		i++;
	}	
	return (0);
}
