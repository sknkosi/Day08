/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:21:21 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 16:23:33 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split_whitespaces(char *str)
{
	char **tab;
	int	i = 0;
	int	j = 0;
	int	k;

	tab = malloc(ct_wd(str));
	while (str[j])
	{
		k = 1;
		while (is_separator(str[j]))
			j++;
		*(tab + i) = (char *)malloc(sizeof(char) * ((ct_len(j, str) + 1)));
		while (!(is_separator(str[j])))
		{
			tab[i][k - 1] = str[j++];
			k++;
		}
		tab[i++][k - 1] = '\0';
	}
	tab[i] = 0;
	return (&tab[0]);
}
