/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:46:58 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/03 18:12:34 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie();
    ~Zombie();

    void announce();
    void set_name(std::string n);
};

Zombie* zombieHorde(int N, std::string name);
//Zombie* newZombie(std::string name);
//void    randomChump(std::string name);

#endif
