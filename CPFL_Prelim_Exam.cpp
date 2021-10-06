#include<iostream>
#include<string>

using namespace std;

const double tax = 0.12;
const double philhealth(150), sss(250), pagibig(200);

int main(){

//Variables

string name, date, employ_status, employ_no;
int hours_worked;
float hourly_rate, gross_pay, withhold_tax, net_pay;

//Input

cout << "Enter your name            : ";
getline(cin,name);

cout << "Enter your Employee number : ";
getline(cin,employ_no);

cout << "Enter Date of payday       : ";
getline(cin,date);

cout << "Enter your hourly pay rate : ";
cin >> hourly_rate;

cout << "Enter your hours worked    : ";
cin >> hours_worked;

cout << endl << "\n";

//Process

gross_pay = hourly_rate * hours_worked;
withhold_tax = gross_pay * tax;
net_pay = gross_pay - (withhold_tax + philhealth + sss + pagibig);

if(net_pay < 5000)
{
    employ_status = "Contractual";
}

else if(net_pay >= 5001 && net_pay <= 10000)
{
    employ_status = "Probationary";
}

else
{
    employ_status = "Regular";
}

//Output
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "Payroll summary for : " << name << endl;
cout << "Employee number     : " << employ_no << endl;
cout << "Payroll date        : " << date << endl << "\n";
cout << "You worked " << hours_worked << " hours and earned  Php" << hourly_rate << " per hour" << endl;
cout << "Grosspay        : Php " << gross_pay << endl;
cout << "Witholding Tax  : " << withhold_tax << endl;
cout << "Philhealth      : " << philhealth << endl;
cout << "SSS             : " << sss << endl;
cout << "Pagibig         : " << pagibig << endl;
cout << "________________________________________" << endl;
cout << "Netpay          : Php " << net_pay << endl;
cout << "Employee Status : " << employ_status << endl;

return 0;

}