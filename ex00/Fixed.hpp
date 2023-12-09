#ifndef FIXED_HPP
#define FIXED_HPP

// #include <iostream>

// class Fixed {
// private:
//     int value;
//     static const int fractionalBits = 8;

// public:
//     Fixed();
//     Fixed(const Fixed& other);
//     ~Fixed();

//     Fixed& operator=(const Fixed& other);

//     int getRawBits() const;
//     void setRawBits(int const raw);
// };
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

    int getRawBits() const;
    void setRawBits(int const raw);
};
#endif
