#include "dress.h"

Dress::Dress() : Clothes(){
    this->length = 0;
}
void Dress::addClothes(const Dress& other){
    
}


Clothes* Dress::clone() const override{
    return (new Dress(*this));
}