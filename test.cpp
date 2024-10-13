#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string id;
    string department;
    char group;
    char gender;
};

int main() {
    const int numberOfStudents = 10;

    // Hard-coded table of student data
    Student students[numberOfStudents] = {
        {"John Doe", "001", "Computer Science", 'A', 'M'},
        {"Jane Smith", "002", "Mathematics", 'B', 'F'},
        {"Alice Johnson", "003", "Physics", 'C', 'F'},
        {"Bob Wilson", "004", "Chemistry", 'A', 'M'},
        {"Eva Brown", "005", "Biology", 'B', 'F'},
        {"David Lee", "006", "Engineering", 'C', 'M'},
        {"Sophie Taylor", "007", "History", 'A', 'F'},
        {"Michael Davis", "008", "Geology", 'B', 'M'},
        {"Emma White", "009", "Economics", 'C', 'F'},
        {"Ryan Clark", "010", "Political Science", 'A', 'M'}
    };

    // Output data for each student
    cout << "Students data:" << endl;
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Student " << (i + 1) << ": " << students[i].id << ", " << students[i].name << ", "
             << students[i].department << ", " << students[i].group << ", " << students[i].gender << endl;
    }

    return 0;
}
