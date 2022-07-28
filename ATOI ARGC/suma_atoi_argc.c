/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:28:05 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/28 15:26:30 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	x;

	x = 0;
	res = 0;
	while (str[x] != '\0')
	{
		res = (res * 10) + (str[x] - '0');
		x++;
	}
	return (res);
}
/*
 * Comprobar que funciona el FT_ATOI with esta func.
int	main(void)
{
	char	*str;
	int		valor;

	str = "42";
	valor = ft_atoi(str);
	printf("El valor es: %i", valor);
	return (0);
}
*/

int	main(int argc, char *argv[])
{
	int	res;
	int	a;
	int	b;

	a = 0;
	b = 0;
	res = 0;
	if (argc != 1)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		res = a + b;
	}
	printf("Suma de argumento 1: %i, y argumento 2: %i, es: %i", a, b, res);
	return (0);
}
