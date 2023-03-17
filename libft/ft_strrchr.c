/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkim3 <minkim3@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:13:28 by minkim3           #+#    #+#             */
/*   Updated: 2022/12/09 20:18:36 by minkim3          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*dummy;
	size_t	index;

	dummy = (char *)s;
	index = ft_strlen(dummy);
	if ((char)c == '\0')
		return (&dummy[index]);
	while (index--)
	{
		if ((char)(dummy[index]) == (char)c)
			return (&dummy[index]);
	}
	return (NULL);
}
