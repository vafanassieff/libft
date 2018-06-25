/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:41:13 by vafanass          #+#    #+#             */
/*   Updated: 2018/06/25 17:51:52 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main (int argc, char **argv) {
    ft_putnbr(argc);
    ft_putchar('\n');
    ft_putstr(argv[0]);
    if (argc == 2) {
        ft_putchar('\n');
        ft_putstr(argv[1]);
        ft_putchar('\n');
        ft_putstr("toto");
    }
    other_file_func();
}
