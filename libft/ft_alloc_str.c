/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcamhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 19:18:50 by jcamhi            #+#    #+#             */
/*   Updated: 2016/01/04 19:19:13 by jcamhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_alloc_str(const char *str)
{
	char	*truc;

	truc = (char*)malloc(ft_strlen(str) + 1);
	ft_strcpy(truc, str);
	return (truc);
}
