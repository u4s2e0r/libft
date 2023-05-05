/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 21:16:31 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/05 21:36:54 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = 'Ç';
	printf("ma fonction retourne %d\n", ft_isascii(c));
	printf("la fonction de base retourne %d\n", isascii(c));
}
