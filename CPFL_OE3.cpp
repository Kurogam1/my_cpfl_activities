//Name: Denver S. Reyes
//Activity: OE3
//Description: Computation of Employee gross pay and net pay using the application of branching with conditional statement
//Date: 09-22-2021

#include <iostream>
#include <string>
using namespace std;

const double TAX1 = 0.12;
const double TAX2 = 0.10;
const double TAX3 = 0.05;

int main(){

//Variables

string employ_name;
int work_hours, employ_id, tax_rate;
double rate_per_hour, gross_pay, net_pay,tax;

//Input

cout << "Enter your Employee ID       : ";
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

else if (gross_pay <= 20000) {
    tax = gross_pay * TAX3;
    net_pay = gross_pay - tax;
    tax_rate = 5;
}

//Output

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "---------------------------------------"    << endl;
cout << "Employee ID        : "   << employ_id       << endl;
cout << "Employee Name      : "   << employ_name     << endl;
cout << "Employee Gross Pay : P " << gross_pay       << endl;
cout << "Employee Tax Rate  : "   << tax_rate <<"%"  << endl;
cout << "Employee Net Pay   : P " << net_pay         << endl;

return 0;

}
