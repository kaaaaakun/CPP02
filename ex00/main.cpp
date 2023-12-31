/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:46:14 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/09 16:37:45 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "color.hpp"

int main() {
    std::cout << RED;
    Fixed a;
    std::cout << BLUE;
    Fixed b(a);
    std::cout << GREEN;
    Fixed c;

    std::cout << RED;
    c = b;

    std::cout << BLUE;
    std::cout << a.getRawBits() << std::endl;
    std::cout << GREEN;
    std::cout << b.getRawBits() << std::endl;
    std::cout << RED;
    std::cout << c.getRawBits() << std::endl;
    std::cout << BLUE;

    return 0;
}
