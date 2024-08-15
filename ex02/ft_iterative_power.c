/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:06:37 by shashemi          #+#    #+#             */
/*   Updated: 2024/08/15 13:06:39 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	j;

	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 2)
	{
		j *= nb;
		power--;
	}
	return (j);
}
