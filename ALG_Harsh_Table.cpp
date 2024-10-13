#include <iostream>
#include <fstream>
using namespace std;

float eql(int x){
    float y;
    y = (3 * x * x) - (float)(2 * x) / 5;
    return y;
}

int main(){
    int x[4] = {2, 5, 7, 9};
    fstream myfile;
    string line;
    string data;

    myfile.open("Data.csv", ios::in);
    while(getline(myfile, line)){
        cout << line << endl;
        stringstream s(line);
        while(getline(s, data, ',')){
            cout << data << endl;
            break;
        }
    }
    for(int i = 0 ; i < 4; i++){
        x[i] = stoi(data[i])
        cout << "When x is: " << x[i] << endl
             << " .The result is: " << eql(x[i]) << endl;
    }
    return 0;
}
