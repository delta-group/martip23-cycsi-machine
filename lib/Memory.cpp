#include "Memory.h"

// constructor
Memory::Memory() {
    SP = 0;
}

string Memory::read(int addr) {
    return RAM[addr];
}

void Memory::write(int addr, string data) {
    RAM[addr] = data;
};

void Memory::push(int data) {
   STACK[SP++] = data;
}

int Memory::pop(void) {
    return STACK[--SP];
}
