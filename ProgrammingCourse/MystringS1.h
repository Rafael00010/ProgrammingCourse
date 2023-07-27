#pragma once

class MystringS1
{
    friend std::ostream& operator<<(std::ostream& os, const MystringS1& rhs);
    friend std::istream& operator>>(std::istream& in, MystringS1& rhs);

private:
    char* str;
public:
    MystringS1(); 
    MystringS1(const char* s); 
    MystringS1(const MystringS1& source);
    MystringS1(MystringS1&& source);
    ~MystringS1(); 

    MystringS1& operator=(const MystringS1& rhs); 
    MystringS1& operator=(MystringS1&& rhs); 

    void display() const;

    int get_length() const;   
    const char* get_str() const;

    // Overloaded operator member methods 
    MystringS1 operator-() const;       
    MystringS1 operator+(const MystringS1& rhs) const;
    bool operator==(const MystringS1& rhs) const;
    bool operator!=(const MystringS1& rhs) const; 
    bool operator<(const MystringS1& rhs) const; 
    bool operator>(const MystringS1& rhs) const;
    MystringS1& operator+=(const MystringS1& rhs); 
    MystringS1 operator*(int n) const; 
    MystringS1& operator*=(int n);   
    MystringS1& operator++(); 
    MystringS1 operator++(int); 
};