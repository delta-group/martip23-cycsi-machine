#include "ALU.h"
#include <iostream> //For debugging
using namespace std;//Debugging

ALU::ALU() {
}

int ALU::add(int d1, int d2) {
    return d1 + d2;
}

int ALU::sub(int d1, int d2){
    return d1 - d2;
}

int ALU::mult(int d1, int d2){
    return d1 * d2;
}

int ALU::div(int d1, int d2){
    return d1 / d2;
}
