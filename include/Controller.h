#pragma once
#include "Memory.h"
#include "ALU.h"
#include <string>
using namespace std;

class Controller {
    public:
        int PC;             // program counter
        int MAXCYCLES;      // stop when cycle count reaches this
        string REGISTER;    // data cycle is workign on
        bool data;          // T = data, F = instructions

        Memory memory;      //Load up memory
        ALU alu;            //Load up ALU
        
        //Constructor
        Controller();

        void load_code(string fname);

        //Start running machine for limited number of cycles
        int run(int maxcycles);

        //Texas four-step
        void fetch();
        void decode();
        void execute();
        void store();
};

