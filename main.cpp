#include <iostream>
#include "suitcase.h"
#include "dress.h"

int main(){
    Suitcase suitcase;
    Dress dress("cherven", "golqm", 10, 10);
    suitcase.addClothes(dress);
    std::cout << suitcase;
}