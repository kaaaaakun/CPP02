/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:41:09 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/20 18:45:22 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main() {
    Fixed a;
    Fixed b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << RED << "-----my-test-----" << END << std::endl;
    std::cout << "a  :" << a << std::endl;
    std::cout << "++a:"<< ++a << std::endl;
    std::cout << "a  :"<< a << std::endl;
    std::cout << "a++:"<< a++ << std::endl;
    std::cout << "a  :"<< a << std::endl;
    std::cout << "a/a:"<< a/a << std::endl;
    std::cout << "a*a:"<< a*a << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << BLUE << "b  :" << b << END << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "a*b:"<< a*b << std::endl;
    std::cout << "a/b:"<< a/b << std::endl;
    std::cout << "a+b:"<< a+b << std::endl;
    std::cout << "a-b:"<< a-b << std::endl;
    std::cout << GREEN << "-----my-test-----" << END << std::endl;
    std::cout << "max:"<< Fixed::max(a, b) << std::endl;
    std::cout << "min:"<< Fixed::min(a, b) << std::endl;
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


    std::cout << GREEN << "-----1.0f/5.0f-----" << END << std::endl;
	a = 1.0f;
	b = 5.0f;
	std::cout << "a/b:"<< a/b << std::endl;
    std::cout << GREEN << "-----float-----" << END << std::endl;
	a = 0.2f;
	std::cout << "0.2:"<< a << std::endl;
	a = 0.3f;
	std::cout << "0.3:"<< a << std::endl;
	a = 0.4f;
	std::cout << "0.4:"<< a << std::endl;
	a = 0.5f;
	std::cout << "0.5:"<< a << std::endl;
	a = 0.8f;
	std::cout << "0.8:"<< a << std::endl;

    return 0;
}
