/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:05:24 by efischer          #+#    #+#             */
/*   Updated: 2018/09/09 22:09:42 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (!*s1 && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	return (0);
}
