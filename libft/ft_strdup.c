/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkim3 <minkim3@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:01:46 by minjukim          #+#    #+#             */
/*   Updated: 2022/12/04 21:51:39 by minkim3          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	size_t	arr_size;

	arr_size = ft_strlen(s1) + 1;
	arr = (void *)malloc(sizeof(char) * (arr_size));
	if (!arr)
		return (NULL);
	ft_memmove(arr, s1, arr_size);
	return (arr);
}
