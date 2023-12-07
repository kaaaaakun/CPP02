/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:14:02 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/03 18:43:08 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *NewZombies;

	NewZombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		NewZombies[i].set_name(name);
	}
	return (NewZombies);
}
