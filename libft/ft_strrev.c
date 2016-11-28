/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:57:13 by darabi            #+#    #+#             */
/*   Updated: 2015/12/04 19:13:35 by darabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (i > j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j++;
	}
	return (str);
}