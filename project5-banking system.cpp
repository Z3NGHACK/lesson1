#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <time.h>
#include <string.h>
using namespace std;
string fname, lname, gmail, pass;
char password[20];
int age, card_number, phone_number;
float money_deposit, money_withdraw, minu;
void inputInformation();
void checkInformation();
void deleteInformation();
void exit_information();
void deposit_money();
void withdraw_money();

void inputInformation(){
    srand(time(0));
    card_number = rand()%999999+111111;
    system("cls");
    cout << "\t***CREATE ACCOUNT***";
    cout << "Enter your first name: "; cin >> fname;
    cout << "Enter your last name: "; cin >> lname;
    cout << "Enter your age: "; cin >> age;
    cout << "Enter your phone number: "; cin >> phone_number;
    cout << "Enter your G-mail: "; cin >> gmail;
    cout << "Enter your password: ", cin >> password;

    cout << "\t***USER-ACCOUNT-INFORMATION***";
    cout << "First name: " << fname << "\nLast name: " << lname;
    cout << "\nAge: " << age << "\nPhone Number: " << phone_number
    cout << "\nAccount number: "<< card_number<< "\nG-mail: " << gmail;;
    cout << "\nPassword: ";
    for(int i =0; i < strlen(password); i++){
        cout << "*";
    }

    ofstream bank("banking-system.txt", ios::app);
    bank << "\t***USER-ACCOUNT-INFORMATION***";
    bank << "First name: " << fname << "\nLast name: " << lname;
    bank << "\nAge: " << age << "\nPhone Number: " << phone_number;
    bank << "\nAccount number: "<< card_number<< "\nG-mail: " << gmail;
    bank << "\nPassword: ";
    for(int i =0; i < strlen(password); i++){
        bank << "*";
    }
    system("pause");
    system("cls");
    bank.close();
}

void checkInformation(){
    bool found =false;
    ifstream myfile("banking-system.txt", ios::app);
    string keyword;
    cout << "\n\tEnter the first name or last name: "; cin >> keyword;
    while(keyword>>fname>>lname){
        if(keyword==fname||keyword==lname){
            system("cls");
            cout << "\t***USER-ACCOUNT-INFORMATION***";
            cout << "First name: " << fname << "\nLast name: " << lname;
            cout << "\nAge: " << age << "\nPhone Number: " << phone_number
            cout << "Account number: "<< card_number<< "\nG-mail: " << gmail;;
            cout << "\nPassword: ";
            for(int i =0; i < strlen(password); i++){
                cout << "*";
            }
            found = true;
            break;
        }
    }
    if(found == false){
        cout << "\n\tNo such information is found!!\n\n";
        system("pause");
        system("cls");
    }
}

void deposit_money(){
    int num;
    system("cls");
    cout << "\n\t*** ACCOUNT-DEPOSITE ***";
    cout << "\n\nEnter account number: "; cin >> num;
    if(num == card_number){
        cout << "\nAmount deposit: "; cin >> money_deposit;
        cout << "\n\n\t*** USER-ACCOUNT-DETAIL ***";
        cout << "\t***USER-ACCOUNT-INFORMATION***";
        cout << "First name: " << fname << "\nLast name: " << lname;
        cout << "\nAge: " << age << "\nPhone Number: " << phone_number
        cout << "\nAccount number: "<< card_number;
        cout << "\nAmount money: "<< money_deposit;
    }else if(num !=card_number){
        cout << "\n\n\t!!! CARD-NUMBER-INVALID !!!";
    }
    system("pause");
    system("cls");
}

void withdraw_money(){
    int num;
    system("cls");
    cout << "\n\t*** ACCOUNT-WITHDRAW ***";
    cout << "\n\nEnter account number: "; cin >> num;
    cout << "\nAmount of money: "<< money_deposit;
    if(num == card_number){
        cout << "\nEnter amount to withdraw: "; cin >> money_withdraw;
        minu = money_deposit - money_withdraw;
        if(minu <=0){
            cout << "\n\n\tNot enough money to withdraw. "
            break;
        }
        cout << "\n\n\t*** USER-ACCOUNT-DETAIL ***";
        cout << "\t***USER-ACCOUNT-INFORMATION***";
        cout << "First name: " << fname << "\nLast name: " << lname;
        cout << "\nAge: " << age << "\nPhone Number: " << phone_number
        cout << "\nAccount number: "<< card_number;
        cout << "\nAmount money: "<< money_deposit;
    }else if(num !=card_number){
        cout << "\n\n\t!!! CARD-NUMBER-INVALID !!!";
    }
    system("pause");
    system("cls");
}


}
void exit_information(){
    system("cls");
    cout << "\n\tTHANK YOU FOR USING OUR SYSTEM!";
    exit(1);
}
void deleteInformation(){




}

int main(){
    system("cls");
int choice;
cout << "\t*** INFORMATION-SAVER***";
cout << "\n\n\t1. Input information.\n\t2. Check information.\n3. Delete information. \n4.Exit.\n\t-->";
cin >> choice;
switch(choice){
    case 1: inputInformation();break;
    case 2:checkInformation();break;
    case 3:deposit_money();break;
    case 4:withdraw_money();break;
    case 5:deleteInformation();break;
    case 6:exit();break;
    default:
        cout << "\t!!!INVALID INPUT!!!";
}
return 0;
}
