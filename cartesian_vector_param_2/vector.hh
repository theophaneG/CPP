#pragma once

#include <ostream>

#include "config.h"
class Vector;

std::ostream& operator<<(std::ostream&,const Vector&);

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(std::initializer_list<value> myvectop);
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    Vector& operator+=(const value& rhs);
    Vector& operator*=(const value& rhs);
    value& operator[](const size_t rhs);

    Vector operator+(const Vector& rhs)const;
    Vector operator-(const Vector& rhs)const;
    value operator*(const Vector& rhs)const;
    Vector operator*(const value& rhs)const;
    const value& operator[](const size_t rhs)const;
    // More to go

private:
// Private Member functions here
 value datavec [NDIM];
// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here