#include "clothes.h"

Clothes::Clothes(){
    this->color = nullptr;
    this->price = 0;
    this->sizeOfClothes = nullptr;
}
Clothes::Clothes(const Clothes& other){
    copy(other);
}
Clothes& Clothes::operator=(const Clothes& other){
    if(this != &other){
        free();
        copy(other);
    }
    return *this;
}
Clothes::~Clothes(){
    free();
}
void Clothes::free(){
    delete[] color;
    delete[] sizeOfClothes;
}
void Clothes::copy(const Clothes& other){
    strcpy(this->color,other.color);
    strcpy(this->sizeOfClothes,other.sizeOfClothes);
    this->price = other.price;
}

std::ostream& operator<<(std::ostream& out, const Clothes& other){
    out << "Color: " << other.color << '\n';
    out << "Price: " << other.price << '\n';
    out << "sizeOfClothes: " << other.sizeOfClothes << '\n';
}

bool Clothes::operator==(const Clothes& other){
    if(!strcmp(this->color, other.color)){
        if(!strcmp(this->sizeOfClothes, other.sizeOfClothes)){
            if(this->price - other.price ){
                return true;
            }
        }  
    }
}
