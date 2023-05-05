/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 21:04:20 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/05 21:15:43 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) 
			|| (c > 96 && c < 123) 
			|| (c > 47 && c < 58))
		return (8);
	else
		return(0);
}

/*int	main(void)
{
	char	c;
	
	c = 'z';
	printf("ma fonction retourne %d\n", ft_isalnum(c));
	printf("la fonction de base retourne %d", isalnum(c));
}*/
