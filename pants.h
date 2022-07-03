#pragma once
#include "clothes.h"

class Pants: public Clothes{
    private:
    double length;
    public:
    Pants();
    friend std::ostream& operator<<(std::ostream&, const Pants&);
};