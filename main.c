/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaseris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:21:22 by akaseris          #+#    #+#             */
/*   Updated: 2018/01/12 17:26:54 by akaseris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>


int get_next_line(const int fd, char **line);

int		main(int ac, char **ag)
{
	int fd;
	char **str;

	fd = open(ag[1], O_RDONLY);
	get_next_line(fd, str);
	return (0);
}
