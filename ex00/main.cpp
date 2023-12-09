/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:46:14 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/09 16:25:17 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "color.hpp"

// int main() {
//     std::cout << RED;
//     Fixed a;
//     std::cout << BLUE;
//     Fixed b(a);
//     std::cout << GREEN;
//     Fixed c;

//     std::cout << RED;
//     c = b;

//     std::cout << BLUE;
//     std::cout << a.getRawBits() << std::endl;
//     std::cout << GREEN;
//     std::cout << b.getRawBits() << std::endl;
//     std::cout << RED;
//     std::cout << c.getRawBits() << std::endl;
//     std::cout << BLUE;

//     return 0;
// }

int main() {
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    a = Fixed(1234.4321f);

    std::cout << "a is " << a.toFloat() << std::endl;
    std::cout << "b is " << b.toInt() << std::endl;
    std::cout << "c is " << c.toFloat() << std::endl;
    std::cout << "d is " << d.toInt() << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << static_cast<int>(c.toFloat()) << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}