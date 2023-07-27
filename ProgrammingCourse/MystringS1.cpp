#include <iostream>
#include <cstring>
#include "MystringS1.h"

MystringS1::MystringS1()
    : str{ nullptr } 
{
    str = new char[1];
    *str = '\0';
}

MystringS1::MystringS1(const char* s)
    : str{ nullptr } 
{
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[strlen(s) + 1];
        strcpy_s(str, strlen(s) + 1, s);
    }
}

MystringS1::MystringS1(const MystringS1& source)
    : str{ nullptr } 
{
    str = new char[strlen(source.str) + 1];
    strcpy_s(str, strlen(source.str) +1, source.str);
}


MystringS1::MystringS1(MystringS1&& source)
    :str(source.str) 
{
    source.str = nullptr;
}

MystringS1::~MystringS1() 
{
    delete[] str;
}

MystringS1& MystringS1::operator=(const MystringS1& rhs) 
{
    if (this == &rhs)
        return *this;
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy_s(str, strlen(rhs.str) + 1, rhs.str);
    return *this;
}

MystringS1& MystringS1::operator=(MystringS1&& rhs)
{
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void MystringS1::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int MystringS1::get_length() const { return strlen(str); }
const char* MystringS1::get_str() const { return str; }

std::ostream& operator<<(std::ostream& os, const MystringS1& rhs) 
{
    os << rhs.str;
    return os;
}

std::istream& operator>>(std::istream& in, MystringS1& rhs) 
{
    char* buff = new char[1000];
    in >> buff;
    rhs = MystringS1{ buff };
    delete[] buff;
    return in;
}

bool MystringS1::operator==(const MystringS1& rhs) const 
{
    return (std::strcmp(str, rhs.str) == 0);
}

bool MystringS1::operator!=(const MystringS1& rhs) const
{
    return !(std::strcmp(str, rhs.str) == 0);
}

bool MystringS1::operator<(const MystringS1& rhs) const 
{
    return (std::strcmp(str, rhs.str) < 0);
}

bool MystringS1::operator>(const MystringS1& rhs) const 
{
    return (std::strcmp(str, rhs.str) > 0);
}

MystringS1 MystringS1::operator-() const 
{
    char* buff = new char[std::strlen(str) + 1];
    strcpy_s(buff, std::strlen(str) + 1, str);
    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    MystringS1 temp{ buff };
    delete[] buff;
    return temp;
}

MystringS1 MystringS1::operator+(const MystringS1& rhs) const 
{
    char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    strcpy_s(buff, std::strlen(str) + std::strlen(rhs.str) + 1, str);
    strcat_s(buff, std::strlen(str) + std::strlen(rhs.str) + 1, rhs.str);
    MystringS1 temp{ buff };
    delete[] buff;
    return temp;
}

MystringS1& MystringS1::operator+=(const MystringS1& rhs) 
{
    *this = *this + rhs;
    return *this;
}

MystringS1 MystringS1::operator*(int n) const 
{
    MystringS1 temp;
    for (int i = 1; i <= n; i++)
        temp = temp + *this;
    return temp;
}

MystringS1& MystringS1::operator*=(int n) 
{
    *this = *this * n;
    return *this;
}

MystringS1& MystringS1::operator++() 
{  
    for (size_t i = 0; i < std::strlen(str); i++)
        str[i] = std::toupper(str[i]);
    return *this;
}

MystringS1 MystringS1::operator++(int)
{ 
    MystringS1 temp(*this);  
    operator++();   
    return temp; 
}