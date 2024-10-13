#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct Employee
{
    string name;
    int age;
    char gender;
    double salary;
    string email;
};

void write_to_file(const string &filename, const vector<Employee> employees, bool append = false){
    ofstream file(filename);

    if(append){
        file.open(filename, ios::app);
    }else{
        file.open(filename);
    }

    if(!file.is_open()){
        cerr << "Error opening file!" << endl;
        return;
    }
    if(!append){
        file << "Name, Age, Gender, Salary, Email" << endl;
    }

    for(const Employee &em : employees){
        file << em.name << ","
             << em.age << ","
             << em.gender << ","
             << em.salary << ","
             << em.email << endl;
    }
    file.close();
}

vector<Employee> read_from_file(const string &filename){
    vector<Employee> employees;
    ifstream file(filename);

    if(!file.is_open()){
        cerr << "Error opening file!" << endl;
        return employees;
    }
    string line;
    getline(file, line);
    while(getline(file, line)){
        Employee em;
        stringstream ss(line);

        getline(ss, em.name, ',');
        ss >> em.age;
        ss.ignore();
        ss >> em.gender;
        ss.ignore();
        ss >> em.salary;
        ss.ignore();
        getline(ss, em.email);

        employees.push_back(em);
    }
    file.close();
    return employees;
}

void display(vector<Employee> &employees){
    cout << "Employees data: " << endl;
    cout << "Name\tAge\tGender\tSalary\tEmail" << endl;
    for(const Employee &em : employees){
        cout << em.name << "\t" << em.age << "\t" << em.gender << "\t" << em.salary << "\t" << em.email << endl;
    }
}

int main(){
    const string filename = "employee_data.csv";
    vector<Employee> employees;
    int size = 3;

    cout << "Enter information of 10 employee." << endl;

    for(int i = 0; i < size; i++){
    Employee em;
    cout << "Employee #" << i + 1 << endl;
    cout << "Name: ";
    getline(cin, em.name);
    cout << "Age: ";
    cin >> em.age;
    cout << "Gender(M/F): ";
    cin >> em.gender;
    cout << "Salary: ";
    cin >> em.salary;
    cin.ignore();
    cout << "Email: ";
    getline(cin, em.email);

    employees.push_back(em);
    }
    write_to_file(filename, employees);
    display(employees);
    employees.clear();
    employees = read_from_file(filename);
    display(employees);
}
