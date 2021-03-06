/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 00:59:21 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 23:27:38 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_strlen(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
		tmp++;
	return (tmp - str);
}
