#include "pants.h"

Pants::Pants() : Clothes(){
    this->length = 0;
} 

std::ostream& operator<<(std::ostream& out, const Pants& other){
    out << other.length << "\n";
    out << "Pants" << "\n";
    out << "-------------";
    return out;
}
Clothes* Pants::clone() const {
    return new Pants(*this);
}
Pants::Pants(const Pants& other) : Clothes(other){
    this->length = other.length;
}
Pants Pants::operator=(const Pants& other) {
    if(this != &other){
        Clothes::operator=(other);
        this->length = other.length;
    }
    return *this;
}
Pants::~Pants(){}