#pragma once

#include <string>
using namespace std;

#define MAX_MEM 500

class Memory {
    private: //For debugging, don't forget to remove
    string RAM[MAX_MEM];            // code memory
    int STACK[MAX_MEM];             // data memory

    public:
        Memory();               // constructor

        // code memory access routines
        string read(int addr);
        void write(int addr, string data);

        // stack access routines
        void push(int);
        int pop(void);
};

