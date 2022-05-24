/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:35:58 by eamirkha          #+#    #+#             */
/*   Updated: 2022/03/29 15:47:50 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	value;
	char	*str;

	len = ft_strlen(s);
	value = (char)c;
	str = (char *)s;
	while (len >= 0)
	{
		if (str[len] == value)
			return (&str[len]);
		len--;
	}
	return (NULL);
}
