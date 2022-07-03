#pragma once
#include "clothes.h"

class Dress: public Clothes{

    private:
    double length;
    public:
    Dress();
    // Dress(const Dress&);
    // Dress operator=(const Dress&);
    // ~Dress();
    void addClothes(const Dress&);


    virtual Clothes* clone() const override;
};