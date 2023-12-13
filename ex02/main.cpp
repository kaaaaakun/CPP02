/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:41:09 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/13 15:29:32 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main() {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "-----my-test-----" << std::endl;
    std::cout << "a  :" << a << std::endl;
    std::cout << "++a:"<< ++a << std::endl;
    std::cout << "a  :"<< a << std::endl;
    std::cout << "a++:"<< a++ << std::endl;
    std::cout << "a  :"<< a << std::endl;
    std::cout << "a/a:"<< a/a << std::endl;
    std::cout << "a*a:"<< a*a << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "b  :" << b << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "a*b:"<< a*b << std::endl;
    std::cout << "a,b:"<< Fixed::max(a, b) << std::endl;
    std::cout << "a,b:"<< Fixed::min(a, b) << std::endl;
    if (a > b)
        std::cout << "a > b" << std::endl;
    if (a < b) 
        std::cout << "a < b" << std::endl;
    if (a >= b)
        std::cout << "a >= b" << std::endl;
    if (a <= b)
        std::cout << "a <= b" << std::endl;
    if (a == b)
        std::cout << "a == b" << std::endl;
    if (a == a)
        std::cout << "a == a" << std::endl;
    if (a != b)
        std::cout << "a != b" << std::endl;
    return 0;
}
