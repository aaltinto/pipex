/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltinto <aaltinto@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:57:05 by aaltinto          #+#    #+#             */
/*   Updated: 2023/10/20 12:57:07 by aaltinto         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	open_file(char *argv, int where)
{
	int	fd;

	if (where == 0)
		fd = open(argv, O_RDONLY, 0777);
	if (where == 1)
		fd = open(argv, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	return (fd);
}

void	close_fds(int *fds)
{
	close(fds[0]);
	close(fds[1]);
}

void	exit_function(int error)
{
	if (error == 0)
		ft_putstr_fd
			("Invalid argument call: ./pipex infile cmd1 cmd2 outfile", 2);
	exit(error);
}

char	free_things(char **str, char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] != '\0')
		free(s1);
	if (s2[i] != '\0')
		free(s2);
	i = -1;
	while (str[++i] != 0)
		free(str[i]);
	free (str);
	return (0);
}
