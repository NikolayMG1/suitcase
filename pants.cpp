#include "pants.h"

Pants::Pants() : Clothes(){
    this->length = 0;
} 

std::ostream& operator<<(std::ostream& out, const Pants& other){
    out << other.length << "\n";
    out << "Pants" << "\n";
    out << "-------------";
}