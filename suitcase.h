#pragma once
#include "clothes.h"
#include <cstring>
#include <iostream>

class Suitcase{
    private:
    char* color;
    char* name;
    char* adress;
    int phoneNumber;
    int size = 0;
    int capacity = 20;
    Clothes** clothes;
    void copy(const Suitcase&);
    void free();
    void resize();
    bool isFull();
    public:
    Suitcase();
    Suitcase(const char*, const char*, const char*, int);
    Suitcase(const Suitcase&);
    Suitcase& operator=(const Suitcase&);
    ~Suitcase();
    void addClothes(const Clothes&);
    void removeClothes(const Clothes&);
};