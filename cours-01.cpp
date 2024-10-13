#include<iostream>
using namespace std;
int main(){
string name, major, gender;
int age;
cout << "Enter your name: "; cin >> name;
cout << "Enter your gender [M] or [F]: "; cin >> gender;
cout << "Enter your major: "; cin >> major;
cout << "Enter your age: "; cin >> age;
system("cls");
if(gender=="M"){
    cout << "Hello! Mr. " << name << " your age is "<< age<< " year old and you learn "<< major <<"!";
}else if(gender=="F"){
    cout << "Hello! Mrs. " << name << " your age is "<< age<< " year old and you learn "<< major <<"!";
    }
return 0;
}
