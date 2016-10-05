#include <iostream>
using namespace std;
#include "Controller.h"
#include "Memory.h"

int main(int argc, char *argv[]) {
    Controller Machine;
    Memory Stack;

    cout << "Cycsi (v2) running..." << endl;
    //FOR DEBUG
    cout << "Pre-Read" << endl;
    Machine.load_code("test.data");
    int cycles_run = Machine.run(10);
    cout << "\t completed run in " << cycles_run << " cycles" << endl; 
}

