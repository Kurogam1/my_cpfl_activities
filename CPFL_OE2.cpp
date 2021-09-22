//Name: Denver S. Reyes
//Activity: OE2
//Description: POS Computer System that computes at least 3 kinds of product input, plus 12% VAT
//Date: 09-14-2021

#include <iostream>
#include <string>
using namespace std;

const double TAX = 0.12;

int main(){

//Variables
string cname, pname1, pname2, pname3;
int pno1, pno2, pno3, p1_qty, p2_qty, p3_qty;
double p1_srp, p2_srp, p3_srp,t_srp, sub_srp,p1_sum, p2_sum, p3_sum,vat;

//Input
 
cout << "Enter your name :";
getline(cin,cname);

cout <<"----------First Product-----------" << endl;
cout << "Enter the 1st Product No       : ";
cin >> pno1;
cin.ignore();

cout << "Enter the 1st Product Name     : ";
getline(cin,pname1);

cout << "Enter the 1st Product Quantity : ";
cin >> p1_qty;

cout << "Enter the 1st Product Price    : ";
cin >> p1_srp;

cout <<"---------Second Product-----------" << endl;
cout << "Enter the 2nd Product No       : ";
cin >> pno2;
cin.ignore();

cout << "Enter the 2nd Product Name     : ";
getline(cin,pname2);

cout << "Enter the 2nd Product Quantity : ";
cin >> p2_qty;

cout << "Enter the 2nd Product Price    : ";
cin >> p2_srp;

cout <<"----------Third Product-----------" << endl;
cout << "Enter the 3rd Product No       : ";
cin >> pno3;
cin.ignore();

cout << "Enter the 3rd Product Name     : ";
getline(cin,pname3);

cout << "Enter the 3rd Product Quantity : ";
cin >> p3_qty;

cout << "Enter the 3rd Product Price    : ";
cin >> p3_srp;

p1_sum = p1_qty * p1_srp;
p2_sum = p2_qty * p2_srp;
p3_sum = p3_qty * p3_srp;
sub_srp = p1_sum + p2_sum + p3_sum;
vat = sub_srp * TAX;
t_srp = sub_srp + vat;

// Output

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "---------------------------RECEIPT-----------------------------" << endl;
cout << "                     Holidae Supermarket                       " << endl;
cout << "                     0630 Daileee Avenue                       " << endl;
cout << "                      Tanauan, Batangas                        " << endl;
cout << "                         02-0511-0821                          " << endl;

cout << "---------------------------------------------------------------" << endl;
cout << "Customer Name : " << cname << endl;

cout << "---------------------------------------------------------------" << endl;
cout << "Product No       : " << pno1     << endl;
cout << "Product Name     : " << pname1   << endl;
cout << "Product Quantity : " << p1_qty   << endl;
cout << "Amount           : P " << p1_sum << endl;

cout << "---------------------------------------------------------------" << endl;
cout << "Product No       : " << pno2     << endl;
cout << "Product Name     : " << pname2   << endl;
cout << "Product Quantity : " << p2_qty   << endl;
cout << "Amount           : P " << p2_sum << endl;

cout << "---------------------------------------------------------------" << endl;
cout << "Product No       : " << pno3     << endl;
cout << "Product Name     : " << pname3   << endl;
cout << "Product Quantity : " << p3_qty   << endl;
cout << "Amount           : P " << p3_sum << endl;

cout << "---------------------------------------------------------------" << endl;
cout << "Subtotal         : P " << sub_srp << endl;
cout << "VAT              : P " << vat     << endl;
cout << "TOTAL            : P " << t_srp   << endl;

return 0;

}