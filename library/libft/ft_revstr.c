/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoc <kgoc@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:31:13 by kgoc              #+#    #+#             */
/*   Updated: 2023/05/21 15:31:13 by kgoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_revstr(char *str)
{
	char		*temp;
	size_t		len;
	size_t		i;
	size_t		len2;

	i = 0;
	len = ft_strlen(str) - 1;
	len2 = len;
	temp = (char *) malloc ((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (i <= len2)
		temp[i++] = str[len--];
	i = -1;
	while (++i <= len2)
		str[i] = temp[i];
	str[i] = '\0';
	free(temp);
	return (str);
}
/*
int main ()
{
	char str[] = "-1212112";
	ft_printf("%s\n", ft_revstr(str));
}
*/
