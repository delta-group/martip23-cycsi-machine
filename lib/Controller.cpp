#include "Controller.h"

#include <fstream>
#include <iostream>  //For IO
#include <cstring>   //For strlen
#include <cstdlib>   //For stoi
#include <cctype>    //for isdigit

using namespace std;

Controller::Controller() {
    PC = 0; // initial instruction location
}

void Controller::load_code(string fname) {

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
            memory.write(addr++,data);
        }
    }
    else {cout << "Error opening file" << endl; }

    //For debug
//    for (int i = 0; i < 10; i++){
//        cout << "Address " << i << ": " << memory.RAM[i] << endl; 
//    }
    cout << "++++FINISHED COPYING INTO MEMORY++++\n" << endl;
}

//Begin controller loop for limited amount of time
int Controller::run(int cycles_to_run) {
    int cycles;
    MAXCYCLES =     cycles_to_run;

    // start the machine. One cycle includes 4 steps.
    for(cycles = 0; cycles < MAXCYCLES; cycles++) {
        fetch();
        decode();
        execute();
        store();
    }
    return cycles;
}

void Controller::fetch(){
    REGISTER = memory.read(PC);
//    cout << "Register " << PC << " holding: " << REGISTER << endl;
};

void Controller::decode()
{
    //Check if input is all numbers//
    int length = strlen(REGISTER.c_str()); //Assigning length to length
    
    data = true; //Start boolean at true

    for (int i = 0; i < (length-1); i++) {
            if (not isdigit(REGISTER[i]))
                {data = false;} //If not allnums will test false, then 
                                //instruction
    }
    if (data) { 
        //Assign tempInt to hold int for transfer and DEBUG
        int tempInt = atoi(REGISTER.c_str());
        memory.push(tempInt);
        cout << tempInt << " added to STACK" << endl;
    }
    PC++;
};


void Controller::execute()
{
    if (!data) 
        if (REGISTER == "add") {
            alu.add(0,0);
        }
        else if (REGISTER == "sub") {
            alu.sub(0,0);
        }       
        else if (REGISTER == "mult") {
            alu.mult(0,0);
        }       
        else if (REGISTER == "div") {
            alu.div(0,0);
        }       
        else {
            cout << "NOT A VALID INSTRUCTION" << endl;
        }

    
};

void Controller::store()
{
    cout << "~~~~~~~CYCLE " << PC << " COMPLETE~~~~~~~~~" << endl;
};
