#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct invitado{
    string nombre;
    string appellido;
    int edad;
    string ciudad;
};

void increment(int &value){
    value += 2;
}
bool paridad(int value){
    if(value % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

struct computer{
    string model;
    string CPU;
    int year;
    string GPU;
    int RAM;
    int price;
};

computer getPrice(string gModel, string gCPU, int gYear, string gGPU, int gRAM){

    computer finalComputer;
    finalComputer.model = gModel;
    finalComputer.CPU = gCPU;
    finalComputer.year = gYear;
    finalComputer.GPU = gGPU;
    finalComputer.RAM = gRAM;
    finalComputer.price = 1000;

    if(gModel == "G100"){
        finalComputer.price +=100;
    }else{
        finalComputer.price += 300;
    }
    if(gRAM >= 16){
        finalComputer.price += 200;
    }else{
        finalComputer.price += 100;
    }

    return finalComputer;
};

int main() {

    int valueA = 10;
    increment(valueA);
    cout << valueA << endl;
    cout << "Paridad de numero: " << paridad(valueA) << endl;

    computer NewComputer = getPrice("G100", "Intel", 2021, "GTX", 16);
    cout << endl << "The price of the new computer is " << NewComputer.price;
    
   return 0;
}


