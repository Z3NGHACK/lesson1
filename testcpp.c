#include <iostream>
#include <sstring>
#include <fstream>
#include <vector>
using namespace std;

struct Employee{
    string name;
    int id;
    string position;
    string tele;
    double salary;
};

void writeDataToFile(const vector<Employee>&employees, const string&fileName){
    ofstream file(fileName);
    if(!file.is_open()){
        cerr << "Error opening file: " << fileName << endl
    }
}
