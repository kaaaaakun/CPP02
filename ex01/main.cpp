/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:46:14 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/03 18:47:03 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *zombies;

    zombies = zombieHorde(10, "zombie");
    for (int i = 0; i < 10; i++) {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}

