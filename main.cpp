#include <iostream>
#include "suitcase.h"
#include "dress.h"

int main(){
    Suitcase suitcase;
    Clothes* dress = new Dress("cherven", "golqm", 10, 10);
    suitcase.addClothes(dress);
    std::cout << suitcase;
}