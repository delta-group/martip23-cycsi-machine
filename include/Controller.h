#pragma once
#include "Memory.h"
#include <string>
using namespace std;

class Controller {
    public:
        int PC;             // program counter
        int MAXCYCLES;      // stop when cycle count reaches this
        string REGISTER;

        Memory memory;
        
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

