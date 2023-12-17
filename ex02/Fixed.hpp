/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:53:32 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/14 13:53:58 by tokazaki         ###   ########.fr       */
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

    int getRawBits() const;
    //void setRawBits(int const raw);

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
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif

