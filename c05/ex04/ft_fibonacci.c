/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:11:08 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/20 16:07:07 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		result = 0;
	if (index == 1)
		result = 1;
	if (index > 1)
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
