/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:17:20 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 16:15:53 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	check_open_file(char *file_name)
{
	int	fd;

	fd = open(file_name, O_RDONLY);
	return (fd);
}

t_param_tab	to_struct(char *line)
{
	t_param_tab	param;
	int			len;

	len = ft_strlen(line);
	param.full = line[len - 1];
	param.obstacle = line[len - 2];
	param.empty = line[len - 3];
	line[len - 3] = 0;
	param.length = ft_atoi(line);
	return (param);
}

int	ft_is_already(char c, char **tab)
{
	int	i;

	i = 0;
	while ((*tab)[i])
	{
		if (c == (*tab)[i])
			return (-1);
		i++;
	}
	return (0);
}

int	check_first_line(char *line, char	**tab)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(line);
	while (i < 3)
	{
		if (ft_char_is_printable(line[len - i - 1]) == -1)
			return (-1);
		if (ft_is_already(line[len - i - 1], tab) == -1)
			return (-1);
		(*tab)[i] = line[len - i - 1];
		i++;
	}
	while (i < len)
	{
		if (ft_char_is_numbers(line[len - i - 1]) == -1)
			return (-1);
		i++;
	}
	return (0);
}

int	write_in_tab(int fd, char ***tab, t_param_tab *param_tab, char **line)
{
	int		end;
	int		i;

	end = 1;
	i = 0;
	*param_tab = to_struct((*line));
	*tab = malloc(((*param_tab).length) * sizeof(char *));

	while (end > 0)
	{
		free((*line));
		*line = 0;
		end = get_next_line(fd, line);
		if (end <= 0)
			break ;
		if (i < (*param_tab).length)
		{
			(*tab)[i] = ft_strdup((*line));
			(*param_tab).width = ft_strlen((*line));
		}
		if (i >= (*param_tab).length)
		{
			free((*line));
			close(fd);
			return (-2);
		}
		i++;
	}
	free((*line));
	close(fd);
	return (end);
}
