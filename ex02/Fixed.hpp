#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:
    int                 value;
    static const int    fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();

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

