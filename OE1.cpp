//Name: Denver S. Reyes
//Activity: OE1
//Description: Input and Output
//Date: 09-07-2021

#include <iostream>
#include <string>
using namespace std;


int main(){

    //Variables
    string                  name;
    int                      age;
    string                gender;
    string               address;
    string        yearandsection;
    string                course;
    long long int        contact;

    cout << " Enter Your Name             : ";
    getline(cin,name);

    cout << " Enter Your Age              : ";
    cin >> age;
    cin.ignore();
    
    cout << " Enter Your Gender           : ";
    getline(cin,gender);

    cout << " Enter Your Address          : ";
    getline(cin,address);

    cout << " Enter Your Year and Section : ";
    getline(cin,yearandsection);

    cout << " Enter Your Course           : ";
    getline(cin,course);

    cout << " Enter Your Contact          : ";
    cin >> contact;
    

    
    //Output 
    cout << "\n__________________________________________" <<endl;
    cout << "\n Your name is " << name                       ;
    cout << "\n You are " << age << " years old"             ;   
    cout << "\n Your gender is " << gender                   ; 
    cout << "\n Your address is " << address                 ; 
    cout << "\n Your year and section is " << yearandsection ; 
    cout << "\n Your course is " << course                   ; 
    cout << "\n Your contact no. is " << contact             ; 

    return 0;
}