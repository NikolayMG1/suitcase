#include "suit.h"

Suit::Suit() : Clothes(){}

std::ostream& operator<<(std::ostream& out, const Suit& other){
    out << "Suit" << '\n';
    out << "-------------";
}