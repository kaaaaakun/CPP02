/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:53:32 by tokazaki          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/12/19 16:14:50 by tokazaki         ###   ########.fr       */
=======
/*   Updated: 2023/12/19 17:50:31 by tokazaki         ###   ########.fr       */
>>>>>>> 78622a7 (fix dev)
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:
    int64_t             value;
    static const int    fractionalBits = 8;

public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);

    float toFloat() const;
    int toInt() const;

    // Overloaded operators
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed &operator++();      // pre-increment
    Fixed operator++(int);    // post-increment
    Fixed &operator--();      // pre-decrement
    Fixed operator--(int);    // post-decrement

    // Static member functions
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static  Fixed &min( Fixed &a,  Fixed &b);
    static  Fixed &max( Fixed &a,  Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif

