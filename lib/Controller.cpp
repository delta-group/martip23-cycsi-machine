#include "Controller.h"
#include "Memory.h"

#include <fstream>
#include <iostream>  //For IO
#include <cstring>   //For strlen
#include <cstdlib>   //For stoi
#include <cctype>    //for isdigit

using namespace std;

Controller::Controller() {
    PC = 0; // initial instruction location
}

void Controller::load_code(string fname, Memory Stack) {

    ifstream fin;
    string data;

    //Open file and store all line as strings
    //Ints will be converted in decode step

    fin.open(fname.c_str());

    if(fin.is_open()) {
        //FOR DEBUG
        cout << "Attempting read" << endl;
        int addr = 0;
        while(!fin.eof()) {
            fin >> data;
            Stack.write(addr++,data);
        }
    }
    else {cout << "Error opening file" << endl; }

    //For debug
    for (int i = 0; i < 10; i++){
        cout << "Address " << i << ": " << Stack.RAM[i] << endl; 
    }
}

//Begin controller loop for limited amount of time
int Controller::run(int cycles_to_run) {
    int cycles;
    MAXCYCLES = cycles_to_run;

    // start the machine. One cycle includes 4 steps.
    for(cycles = 0; cycles < MAXCYCLES; cycles++) {
        fetch();
        decode();
        execute();
        store();
    }
    return cycles;
}

void Controller::fetch()
{

};

void Controller::decode()
{
};

void Controller::execute()
{
};

void Controller::store()
{
};
