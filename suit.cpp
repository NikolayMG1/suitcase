#include "suit.h"

Suit::Suit() : Clothes(){}

std::ostream& operator<<(std::ostream& out, const Suit& other){
    out << "Suit" << '\n';
    out << "-------------";
    return out;
}

Clothes* Suit::clone() const{
    return (new Suit(*this));
}
Suit::Suit(const Suit& other) : Clothes(other){
}
Suit Suit::operator=(const Suit& other) {
    if(this != &other){
        Clothes::operator=(other);
    }
    return *this;
}
Suit::~Suit(){}
