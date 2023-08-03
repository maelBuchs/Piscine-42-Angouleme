/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:53:44 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/17 20:36:15 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	n--;
	diff = 0;
	i = 0;
	while (i < n && (s1[i] == s2[i] && s1[i] >= 0 && s2[i] >= 0))
			i++;
	if (s1[i] != s2[i])
		diff = s1[i] - s2[i];
	return (diff);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_len;

	to_find_len = ft_strlen(to_find);
	i = 0;
	if (to_find_len == 0)
	{
		return (str);
	}
	while (str[i])
	{
		if ((str[i] == to_find[0])
			&& ft_strncmp(&str[i], to_find, to_find_len) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
