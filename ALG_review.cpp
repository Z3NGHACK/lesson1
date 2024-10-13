#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student{
private:
    string StuName;
    string StuAge;
    string StuGender;
    string StuLevel;
    string StuEmail;
public:
    Student(){}
    Student(string name, string age, string gender, string level, string email){
        StuName = name;
        StuAge = age;
        StuGender = gender;
        StuLevel = level;
        StuEmail = email;
    }

    string getStudentName(){
        return StuName;
    }
    void setStudentName(string name){
        StuName = name;
    }
    string getStudentAge(){
        return StuAge;
    }
    void setStudentAge(string age){
        StuAge = age;
    }
    string getStudentGender(){
        return StuGender;
    }
    void setStudentGender(string gender){
        StuGender = gender;
    }
    string getStudentLevel(){
        return StuLevel;
    }
    void setStudentLevel(string level){
        StuLevel = level;
    }
    string getStudentEmail(){
        return StuEmail;
    }
    void setStudentEmail(string email){
        StuEmail = email;
    }
};

void AddStudent(){
    ofstream fout("student.txt", ios::app);
    if(!fout){
        cout << "Error opening file!" << endl;
        return;
    }
    string name;
    string age;
    string gender;
    string level;
    string email;

    cout << "Input the following information..." << endl;
    cout << "Name: "; getline(cin, name);
    cout << "Age: "; getline(cin, age);
    cout << "Gender: "; getline(cin, gender);
    cout << "Level: "; getline(cin, level);
    cout << "Email: "; getline(cin, email);

    Student s(name, age, gender, level, email);
    fout << s.getStudentName() << "," << s.getStudentAge() << "," << s.getStudentGender() << "," << s.getStudentGender() << "," <<
        s.getStudentLevel() << "," << s.getStudentEmail() << endl;
    fout.close();
    cout << "Student add successfully" << endl;
}

void searchUser(){
    ifstream fin("student.txt");
    if(!fin){
        cout << "Error opening file!";
        return;
    }
    string line;
    while(getline(fin, line)){
        string name = line.substr()
    }

}
void displayUser(){
    ifstream fin << "student.txt";
    if(!fout){
        cout << "error opening file ...";
        return;
    }
    string line;
    while(getline(fin, line)){
        string name = substr(0, line.find(","));
        line = line.substr(line.fin(",") + 1;
        string age = substr(line.find(","));
        age = line.substr(line.find(",") + 1);
        string gender = substr(0, line.find(","));
        gender = line.substr(line.find(",") + 1);
        string level = line.substr(0, line.find(",");
        string email = line.substr(line.fin_last_of(",") + 1);
        cout << endl << "Student is found!"<< endl;
        cout << "Student name: " << name << endl;
        cout << "Student age: " << age << endl;
        cout << "Student gender: " << gender << endl;
        cout << "Student level: " << level << endl;
        cout << "Student email: " << email << endl;
    }
    fin.close();
}
int main(){
    int opt;

    cout << "**** Menu ****" << endl;
    cout << "1. Add student."<< endl;
    cout << "2. Search for student." << endl;
    cout << "3. Display all student." << endl;
    cout << "Choose an option: "; cin >> opt;
    switch(opt){
    case 1:
        AddStudent();
        break;
    case 2:
        searchUser();
        break;
    case 3:
        cout << "Displaying all user information .... " << endl;
        displayUser();
    }

    return 0;
}
