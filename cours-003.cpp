#include<iostream>
using namespace std;
int main(){
string name, gender;
float salary, tax;
cout << "Enter your name: "; cin >> name;
cout << "Enter your gender [M] or [F]: "; cin >> gender;
cout << "Enter your salary: "; cin >> salary;
cout << endl << endl;
    if(gender=="M"){
        if(salary > 999){
        tax = salary * 0.095;
            cout <<name << " your salary is "<<salary<< " you have to pay tax 9.5% which is " << tax;
        }else if(salary > 499){
            tax = salary * 0.07;
            cout <<name << " your salary is "<<salary<< " you have to pay tax 7% which is " << tax;
        }else if(salary > 299){
            tax = salary * 0.05;
            cout <<name << " your salary is "<<salary<< " you have to pay tax 5% which is " << tax;
        }else if(salary < 300){
            cout <<name << " your salary is "<<salary<< " you don't have to pay tax.";
        }

    }else if(gender=="F"){
        if(salary > 999){
        tax = salary * 0.08;
            cout <<name << " your salary is "<<salary<< " you have to pay tax 8% which is " << tax;
        }else if(salary > 499){
            tax = salary * 0.065;
            cout <<name << " your salary is "<<salary<< " you have to pay tax 6.5% which is " << tax;
        }else if(salary > 299){
            tax = salary * 0.035;
            cout <<name << " your salary is "<<salary<< " you have to pay tax 3.5% which is " << tax;
        }else if(salary < 300){
            cout <<name << " your salary is "<<salary<< " you don't have to pay tax.";
        }
    }
return 0;
}
