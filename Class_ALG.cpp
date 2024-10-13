
#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;

struct Student{
    string id;
    string Class;
    string gender;
    string name;
    string score;

};
const int Size=1500;
Student stu[Size];


int hashFunction(string name){
    int total=0;

    for(int k=0;k<name.size();k++){
        total=total+(int) name[k];
    }
    return total%Size;
}

void display(){
    cout<<"\t\tID\t"<<"Name\t\t"<<"Gender\t"<<"Class\t"<<"Score"<<endl;
    for(int k=0;k<Size;k++){
        cout<<"position "<<k+1<<": ";
        cout<<stu[k].id<<"\t"<<stu[k].name<<"\t"<<stu[k].gender<<"\t"<<stu[k].Class<<"\t"<<stu[k].score<<"\n";
    }
}

int main(){
    fstream myfile;
    string line;
    string data[5];

    myfile.open("I3List.csv", ios::in);
    while(getline(myfile, line)){
        int i=0;
        stringstream s(line);
        while(getline(s,data[i],',')){
            i++;
        }

        int index=hashFunction(data[1]);

        stu[index].id=data[0];
        stu[index].Class=data[3];
        stu[index].gender=data[2];
        stu[index].name=data[1];
        stu[index].score=data[4];

    }
    display();
    myfile.close();

    return 0;
}
