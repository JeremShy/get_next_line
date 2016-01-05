/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcamhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:28:11 by jcamhi            #+#    #+#             */
/*   Updated: 2016/01/05 13:36:21 by jcamhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		i;

	fd = open(av[1], O_RDONLY);
	i = get_next_line(fd, &line);
	while (i > 0)
	{
		ft_putendl(line);
		i = get_next_line(fd, &line);
	}
	if (i == -1)
		ft_putendl("Erreur: Il y a un soucis avec le fd.");
}
