#pragma once
#include "clothes.h"

class Suit : public Clothes{
    public:
    Suit();   
    friend std::ostream& operator<<(std::ostream&, const Suit&); 
};