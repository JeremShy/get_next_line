/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_str_with_char.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcamhi <jcamhi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 09:14:31 by jcamhi            #+#    #+#             */
/*   Updated: 2015/12/30 09:19:40 by jcamhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_alloc_str_with_char(char c)
{
	char	*ret;

	ret = (char*)malloc(2 * sizeof(char));
	ret[0] = c;
	ret[1] = '\0';
	return (ret);
}
