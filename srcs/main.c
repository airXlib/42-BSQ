/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouffet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 09:45:36 by vtouffet          #+#    #+#             */
/*   Updated: 2017/07/25 02:06:07 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int main(int argc, char *argv[])
{
	if (argc > 1)
		while (argc-- > 0)
			display(resolve(handle_file(argv[argc])));
	else
		display(resolve(handle_file(0)));
	return (0);
}
