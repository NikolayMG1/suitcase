#pragma once
#include "clothes.h"

class Pants: public Clothes{
    private:
    double length;
    public:
    Pants();
    Pants(const Pants&);
    Pants operator=(const Pants&);
    ~Pants();
    friend std::ostream& operator<<(std::ostream&, const Pants&);
    virtual Clothes* clone() const;
};