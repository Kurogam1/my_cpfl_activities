//Name: Denver S. Reyes
//Activity: Midterm Exam
//Description: Temperature conversion app that makes use of switch statements, loops, and functions with arguments.
//Date: 11-09-2021
#include <iostream>

using namespace std;

//Function Declaration

void promptAndWait();
double celToKel(double cel);
double kelToCel(double kel);
double fahToCel(double fahc);
double fahToKel(double fahk);

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(2);
    int ch, wait = 0;
    double temp1, temp2, temp3, temp4;
    double cel, kel, fahc, fahk;

    do{
        system("cls");
        cout << endl;
        cout << "Temperature Conversion App" << endl;
        cout << "[1] Celsius To Kelvin" << endl;
        cout << "[2] Kelvin To Celsius" << endl;
        cout << "[3] Fahrenheit To Celsius" << endl;
        cout << "[4] Fahrenheit To Kelvin" << endl;
        cout << "[0] Exit the App" << endl;
        cout << "Select an option : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Celsius To Kelvin >>\n" << endl;
                cout << "Enter Celsius  : ";
                cin >> cel;
                temp1 = celToKel(cel);
                cout << "\n"  << cel <<" Celsius = " << temp1 << " Kelvin";
                promptAndWait();
                break;
            }

            case 2:{
                cout << "\n<< Kelvin To Celsius >>\n" << endl;
                cout << "Enter Kelvin : ";
                cin >> kel;
                temp2 = kelToCel(kel);
                cout << "\n"  << kel <<" Kelvin = " << temp2 << " Celsius";
                promptAndWait();
                break;
            }

            case 3:{
                cout << "\n<< Fahrenheit To Celsius >>\n" << endl;
                cout << "Enter Fahrenheit : ";
                cin >> fahc;
                temp3 = fahToCel(fahc);
                cout << "\n"  << fahc <<" Fahrenheit = " << temp3 << " Celsius";
                promptAndWait();
                break;
            }

            case 4:{
                cout << "\n<< Fahrenheit To Kelvin >>\n" << endl;
                cout << "Enter Fahrenheit : ";
                cin >> fahk;
                temp4 = fahToKel(fahk);
                cout << "\n" << fahk <<" Fahrenheit = " << temp4 << " Kelvin";
                promptAndWait();
                break;
            }

            case 0:{
                cout << "Thank you for using the app!!!" << endl;
                return 0;
            }
        }
    }
    while(wait == 0);
}

//Function Definition

void promptAndWait(){
    cin.ignore();
    cout << "\nPress Enter or Return to continue...";
    cin.get();
}

double celToKel(double cel){

    return cel + 273.15;
}

double kelToCel(double kel){

    return kel - 273.15;
}

double fahToCel(double fahc){

    return 5 * (fahc - 32) / 9;
}

double fahToKel(double fahk){

    return (5.0 / 9) * (fahk - 32) + 273.15;
}