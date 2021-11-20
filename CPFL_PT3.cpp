//Name: Denver S. Reyes
//Activity: PT3
//Description: Salary program with File I/O Implementation
//Date: 11-20-2021

#include <iostream>
#include <fstream>

using namespace std;

const double TAX1 = 0.12;
const double TAX2 = 0.10;
const double TAX3 = 0.05;

//Function Declaration

void promptAndWait();
void salary();
void read();
void clear();

int main(){

     
    //Variables

    int ch, wait = 0, temp;

    do{
        system("cls");
        cout << " << Salary App >>" << endl;
        cout << " [1] Input new Data " << endl;
        cout << " [2] View File Data" << endl;
        cout << " [3] Clear File Data" << endl;
        cout << " [0] Exit" << endl;
        cout << " Select an option : ";
        cin >> ch;

        switch (ch)
            {
            case 1:{
                
                salary();
                promptAndWait();
                break;
            }

            case 2:{
                
                read();
                promptAndWait();
                break;
            }  

            case 3:{
                
                clear();
                promptAndWait();
                break;
            }  

            case 0:{
                
                cout << "\nThank you for using the app !!!";
                return 0;
                break;
            } 

            default:{

                cout << "Invalid Input !!!";
                promptAndWait();
                break;
            }
        }

    }while(wait == 0);

}

//Function  Definition

void promptAndWait(){

    cin.ignore();
    cout << "\nPress Enter or Return to Continue...";
    cin.get();

}

void salary(){

    //File

    ofstream outfile;
    outfile.open("salary_output.txt", ios:: app);


   
    //Variables
    
    string employ_name;
    int work_hours, employ_id, tax_rate;
    double rate_per_hour, gross_pay, net_pay,tax;

    //Input

    cout << "\nEnter your Employee ID       : ";
    cin >> employ_id;
    cin.ignore();

    cout << "Enter your Employee Name     : ";
    getline(cin,employ_name);

    cout << "Enter your Hours Worked      : ";
    cin >> work_hours;

    cout << "Enter your Rate per Hour     : ";
    cin >> rate_per_hour;

    gross_pay = rate_per_hour * work_hours; 

    if(gross_pay > 40000) {
        tax = gross_pay * TAX1;
        net_pay = gross_pay - tax;
        tax_rate = 12;

    }

    else if (gross_pay >= 30000 && gross_pay <= 40000 ) {
        tax = gross_pay * TAX2;
        net_pay = gross_pay - tax;
        tax_rate = 10;
    }

    else {
        tax = gross_pay * TAX3;
        net_pay = gross_pay - tax;
        tax_rate = 5;
    }

    //Save the output to a file

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    outfile << "---------------------------------------"    << endl;
    outfile << "Employee ID        : "   << employ_id       << endl;
    outfile << "Employee Name      : "   << employ_name     << endl;
    outfile << "Employee Gross Pay : P " << gross_pay       << endl;
    outfile << "Employee Tax Rate  : "   << tax_rate <<"%"  << endl;
    outfile << "Employee Net Pay   : P " << net_pay         << endl;
    outfile << "---------------------------------------"    << endl;

    outfile.close();
}

void read(){

    //Variable

    string data;

    //File

    ifstream MyReadFile("salary_output.txt");

    //Display the data in the file

    while (getline (MyReadFile, data)) {
        
        
        cout << data << endl;
        
    }

    MyReadFile.close();

}

void clear(){

    //File
    fstream erase;

    erase.open("salary_output.txt", ios::out | ios::trunc); // Delete the data in the file
    cout << "\nData has been deleted successfully!" << endl;
    
}