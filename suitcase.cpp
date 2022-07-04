#include "suitcase.h"

Suitcase::Suitcase(){
    try{
        this->clothes = new Clothes*[capacity]; 
    }
    catch(std::exception& error){
        for(int i = 0; i < capacity; i++){
            delete clothes[i];
        }
        delete[] clothes;
        throw error;
    }

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
    try{
        this->clothes = new Clothes*[capacity]; 
    }
    catch(std::exception& error){
        for(int i = 0; i < capacity; i++){
            delete clothes[i];
        }
        delete[] clothes;
        throw error;
    }
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
    try{
        adress = new char[strlen(other.adress)+1];
    }
    catch(std::exception& error){
        delete[] adress;
        throw error;
    }
    strcpy(adress, other.adress);
    try{
        name = new char[strlen(other.name)+1];
    }
    catch(std::exception& error){
        delete[] name;
        throw error;
    }
    strcpy(name, other.name);
    try{
        color = new char[strlen(other.color)+1];
    }
    catch(std::exception& error){
        delete[] color;
        throw error;
    }
    strcpy(color, other.color);
    try{
        this->clothes = other.clothes;
    }
    catch(std::exception& error){
        delete[] clothes;
        throw error;
    }

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
    return false;
}

void Suitcase::addClothes(const Clothes& other){
    if(!isFull()){
        clothes[size] = other.clone();
        std::cout << clothes[size++] << " added successfully";
    }
    else{
        std::cout << "The suitcase is full";
    }
}
void Suitcase::removeClothes(const Clothes* other){
    for(int i = 0; i < size; i++){
        if(clothes[i] == other){
            std::cout << clothes[i] << " removed";
            clothes[i] = clothes[size-1];
            size--;
        }
    }
}

std::ostream& operator<<(std::ostream& out,const Suitcase& other){
    out << "Color: " << other.getColor() << '\n';
    out << "Owner: " << other.getName() << '\n';
    out << "Adress: " << other.getAdress() << '\n';
    out << "Phone number: " << other.getPhoneNumber() << '\n';
    out << "Size: " << other.getSize() << '\n';
    return out;
}

char* Suitcase::getColor() const{
    return color;
}
char* Suitcase::getName() const{
    return name;
}
char* Suitcase::getAdress() const{
    return adress;
}
int Suitcase::getPhoneNumber() const{
    return phoneNumber;
}
int Suitcase::getSize() const{
    return size;
}