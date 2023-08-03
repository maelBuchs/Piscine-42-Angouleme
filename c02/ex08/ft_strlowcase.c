/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:06:28 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/15 22:03:30 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp])
	{
		if (str[temp] >= 'A' && str[temp] <= 'Z')
			str[temp] += 32;
		temp++;
	}
	return (str);
}
