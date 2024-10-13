#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    char str[100];
    int vowel=0,consonant=0;
    cout<<"Please enter a string: ";
    cin >> str;
    for(int i=0; str[i]!='\0'; i++){
    if(str[i] == 97|| str[i] == 101|| str[i] == 105|| str[i] == 111|| str[i] == 117
    ||str[i] == 65|| str[i] == 69|| str[i] == 73|| str[i] == 79|| str[i] == 85 ){
        vowel++;
    }
    else if((str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90 )){
        consonant++;
    }
}
cout<<"\nThe number of vowels: "<<vowel;
cout<<"\nThe number of consonant: "<<consonant << endl << endl;
getch();
    return 0;
}
