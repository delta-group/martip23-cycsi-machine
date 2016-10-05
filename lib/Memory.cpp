#include "Memory.h"

// constructor
Memory::Memory() {
}

string Memory::read(int addr) {
    return "NOP";
}

void Memory::write(int addr, string data) {
    RAM[addr] = data;
};

void Memory::push(int data) {
}

int Memory::pop(void) {
    return 0;
}
