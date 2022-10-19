#include "vector.hh"



std::ostream& operator<<(std::ostream& out,const Vector& invect)
{
    out<<"{";
    for (size_t i = 0; i < NDIM; i++)
    {
        out<<invect[i];
        if(i<NDIM-1) out<<',';
    }
    out<<"}";
    return out;
}

Vector::Vector(){
    for (size_t i = 0; i < NDIM; i++)
    {
        datavec[i]=0;
    }
}

Vector::Vector(std::initializer_list<value> myvectop){
    for (size_t i = 0; i < NDIM; i++)
    {
        datavec[i]=myvectop.begin()[i];
    }
}

Vector& Vector::operator+=(const Vector& rhs){
    for (size_t i = 0; i < NDIM; i++)
    {
        datavec[i]+=rhs[i];
    }
    return *this;
}

Vector& Vector::operator-=(const Vector& rhs){
    for (size_t i = 0; i < NDIM; i++)
    {
        datavec[i]-=rhs[i];
    }
    return *this;
}

value Vector::operator*(const Vector& rhs)const{
    value valuE = 0;
    for (size_t i = 0; i < NDIM; i++)
    {
        valuE+=rhs[i]* (*this)[i];
    }
    return valuE;
}

Vector& Vector::operator*=(const value& rhs){
    for (size_t i = 0; i < NDIM; i++)
    {
        datavec[i]*=rhs;
    }
    return *this;
}

value& Vector::operator[](const size_t rhs){
    return datavec[rhs];
}

const value& Vector::operator[](const size_t rhs)const{
    return datavec[rhs];
}

Vector Vector::operator+(const Vector& rhs)const{
    Vector vector = *this;
    vector += rhs;
    return vector;
}

Vector Vector::operator-(const Vector& rhs)const{
    Vector vector = *this;
    vector -= rhs;
    return vector;
}

Vector Vector::operator*(const value& rhs)const{
    Vector vector = *this;
    vector *= rhs;
    return vector;
}