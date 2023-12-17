/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:53:06 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/16 14:25:30 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed& other);
    ~Fixed();
    Fixed& operator=(const Fixed& other);

    int toInt() const;
    float toFloat() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
