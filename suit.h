#pragma once
#include "clothes.h"

class Suit : public Clothes{
    public:
    Suit();   
    Suit(const Suit&);
    Suit operator=(const Suit&);
    ~Suit();
    friend std::ostream& operator<<(std::ostream&, const Suit&); 
    virtual Clothes* clone() const;
};