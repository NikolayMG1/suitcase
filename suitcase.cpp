#include "suitcase.h"

Suitcase::Suitcase(){
    this->clothes = new Clothes*[capacity]; 
    this->name = nullptr;
    this->adress = nullptr;
    this->color = nullptr;
    this->phoneNumber = 0;
}
Suitcase::Suitcase(const char* name, const char* adress, const char* color, int phoneNumber){
    strcpy(this->name, name);
    strcpy(this->adress, adress);
    strcpy(this->color, color);
    this->phoneNumber = phoneNumber;
    this->clothes = new Clothes*[capacity];
}
Suitcase::Suitcase(const Suitcase& other){
    copy(other);
}
Suitcase& Suitcase::operator=(const Suitcase& other){
    if(this != &other){
        free();
        copy(other);
    }
    return *this;
}
Suitcase::~Suitcase(){
    free();
}

void Suitcase::copy(const Suitcase& other){
    adress = new char[strlen(other.adress)+1];
    strcpy(adress, other.adress);
    name = new char[strlen(other.name)+1];
    strcpy(name, other.name);
    color = new char[strlen(other.color)+1];
    strcpy(color, other.color);
    this->clothes = other.clothes;
}
void Suitcase::free(){
    delete[] color;
    delete[] name;
    delete[] adress;
}
void Suitcase::resize(){

}
bool Suitcase::isFull(){
    if(capacity <= size){
        return true;
    }
}

void Suitcase::addClothes(const Clothes& other){
    if(!isFull){
        clothes[size++] = other;
        std::cout << clothes[size] << " added successfully";
    }
    else{
        std::cout << "The suitcase is full";
    }
}
void Suitcase::removeClothes(const Clothes& other){

    for(int i = 0; i < size; i++){
        if(clothes[i] == other){
            std::cout << clothes[i] << " removed";
            clothes[i] = clothes[size-1];
            size--;
        }
    }
}
