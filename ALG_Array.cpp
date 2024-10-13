
#include<iostream>
using namespace std;
int hashFunction(int key){
    int r;
    r = key % 7;

    return r;

}
main()
{
    int ht[7] = {0};

    ht[hashFunction(20)] = 20;  //index 6
    ht[hashFunction(23)] = 23; // return to index number 2
    ht[hashFunction(2023)] = 2023;

    for(int k=0; k<7; k++){
        cout<<"Position "<<k<<": " <<ht[k]<<endl;
    }
    int n = 100;
    if(ht[hashFunction(n)] == n)
        cout << "\n\t" << n << "it is exist";
    else
        cout << "it is not exist";

}
