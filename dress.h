#pragma once
#include "clothes.h"

class Dress: public Clothes{

    private:
    double length;
    void copy();
    public:
    Dress();
    Dress(const Dress&);
    Dress(const char* color,const char* sizeOfClothes,const double price,const double);
    Dress operator=(const Dress&);
    ~Dress();
    void addClothes(const Dress&);
    virtual Clothes* clone() const override;
    friend std::ostream& operator<<(std::ostream&, const Dress&);
    double getLength() const;
};