/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:46:14 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/16 14:39:23 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "color.hpp"

int main() {
    std::cout << RED;
    Fixed a;
    std::cout << BLUE;
    Fixed const b(10);
    std::cout << GREEN;
    Fixed const c(42.42f);
    std::cout << CYAN;
    Fixed const d(b);
    std::cout << RED;
    a = Fixed(1234.4321f);

    std::cout << RED << "a is " << a << std::endl;
    std::cout << BLUE << "b is " << b << std::endl;
    std::cout << GREEN << "c is " << c << std::endl;
    std::cout << CYAN << "d is " << d << std::endl;

    std::cout << RED << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << BLUE << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << GREEN <<"c is " << c.toInt() << " as integer" << std::endl;
    std::cout << CYAN <<"d is " << d.toInt() << " as integer" << std::endl;
    std::cout << END;

    return 0;
}
