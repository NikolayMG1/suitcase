#include "dress.h"

Dress::Dress() : Clothes(){
    this->length = 0;
}
// void Dress::addClothes(const Dress& other){
    
// }
Dress::Dress(const Dress& other) : Clothes(other){
    this->length = other.length;
}
Dress Dress::operator=(const Dress& other){
    if(this != &other){
        Clothes::operator=(other);
        this->length = other.length;
    }
    return *this;
}
Dress::~Dress(){}
Dress::Dress(const char* color,const char* sizeOfClothes,const double price,const double length):Clothes(color, sizeOfClothes, price), length(length){
    
}
std::ostream& operator<<(std::ostream& out, const Dress& other){
    out << "Length: " << other.getLength();
    out << "Dress" << "\n";
    out << "-------------";
    return out;
}
Clothes* Dress::clone() const {
    return new Dress(*this);
}

double Dress::getLength() const{
    return length;
}