/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaseris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:54:46 by akaseris          #+#    #+#             */
/*   Updated: 2018/01/12 17:32:46 by akaseris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		get_next_line(const int fd, char **line)
{
	char *str;
	int s;

	str = (char*)malloc(sizeof(*str) * 2);
	while (read(fd, str, 1) && str[0] != '\n')
	{
		str[1] = '\0';
		printf("%s", str);
	}
	return (0);
}
