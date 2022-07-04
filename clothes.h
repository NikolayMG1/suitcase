#pragma once
#include <cstring>
#include <iostream>

class Clothes{
    private:
    char* color;
    char* sizeOfClothes;
    double price;
    void copy(const Clothes&);
    void free();

    public:
    Clothes();
    Clothes(const Clothes&);
    Clothes(const char* color,const char* sizeOfClothes,const double price);
    Clothes& operator=(const Clothes&);
    bool operator==(const Clothes&);
    virtual ~Clothes();
    friend std::ostream& operator<<(std::ostream&, const Clothes&);
    //virtual void addClothes(const Clothes&) = 0;
    virtual Clothes* clone() const = 0;
};