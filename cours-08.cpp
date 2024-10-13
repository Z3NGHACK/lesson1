#include <iostream>
using namespace std;
struct book{
    int num_ibsn, book_id;
    float prices;
    char name_book[100];
    string published_year, name_author;
};
book books[5];
void check_ibsn(){
    system("cls");
    int ibsn_checker;
    cout << "\n\t\t*** ISBN-CHECKING";
    cout << "\n\n\tEnter the IBSN number: ";cin >> ibsn_checker;
    for(int i = 0; i<3;i++){
        if(ibsn_checker==books[i].num_ibsn){
            cout << "\nbook ID: " << books[i].book_id;
            cout << "\nbook ISBN: " << books[i].num_ibsn;
            cout << "\nbook title: " << books[i].name_book;
            cout << "\nthe author name: " << books[i].name_author;
            cout << "\nyear published: " << books[i].published_year;
            cout << "\nthe price of book: " << books[i].prices;
            break;
        }else{
            cout << "\n\t!!! INVALID-IBSN !!!\n\n";
            system("pause");
            system("cls");
        }
    }

}
void displayAllBook(){
    system("cls");
    cout << "\n\t\t*** BOOK-STORED ***";
    for(int i = 0; i<3;i++){
        cout << "\n\nbook ID: " << books[i].book_id;
        cout << "\nbook ISBN: " << books[i].num_ibsn;
        cout << "\nbook title: " <<books[i].name_book;
        cout << "\nthe author name: " <<books[i].name_author;
        cout << "\nyear published: " << books[i].published_year;
        cout << "\nthe price of book: " <<books[i].prices << endl << endl;
        system("pause");
        system("cls");
    }

}


int main(){
    cout << "\n\t\t*** BOOK-INFORMATION";
    for (int i = 0; i < 3; i++) {
        cout << "\n\t*** Enter book " << i+1 << " information ***\n";
        cout << "Enter book ID: ";
        cin >> books[i].book_id;
        cout << "Enter book ISBN: ";
        cin >> books[i].num_ibsn;
        cout << "Enter book title: ";
        cin >> books[i].name_book;
        cout << "Enter the author name: ";
        cin >> books[i].name_author;
        cout << "Enter year published: ";
        cin >> books[i].published_year;
        cout << "Enter the price of book: ";
        cin >> books[i].prices;
     }
     system("cls");
     int choice;
     cout << "\n\tThe information is stored!";
     cout << "\n\t1. Display all book information";
     cout << "\n\t2. Check book with ibsn";
     cout << "\n\t-->";cin>>choice;
     switch(choice){
     case 1: displayAllBook; break;
     case 2: check_ibsn(); break;
     }

}
