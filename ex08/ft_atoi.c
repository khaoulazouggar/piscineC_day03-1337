/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 23:42:38 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/22 08:00:40 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int sing;
	int a;

	i = 0;
	sing = 1;
	a = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
		sing = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return (a * sing);
}

int main()
{
	printf("%d", ft_atoi("		+123"));
	return (0);
}
