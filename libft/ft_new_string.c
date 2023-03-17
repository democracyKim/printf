/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkim3 <minkim3@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:02 by minkim3           #+#    #+#             */
/*   Updated: 2023/01/18 16:15:52 by minkim3          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_new_string(size_t strlen)
{
	char	*new_string;

	new_string = (char *)malloc(sizeof(char) * (strlen));
	if (!new_string)
		return (NULL);
	return (new_string);
}
