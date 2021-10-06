//Name: Denver S. Reyes
//Activity: PT1
//Description: Interactive odd/even number scheme using while loop and if conditional statement
//Date: 10-06-2021

#include<iostream>

using namespace std;

int main (){

    //Variables
    int range, consecutive;


    cout << "Enter Range of Numbers : ";
    cin >> range;
    cout << "Enter " << range << " consecutive number : ";
    cin >> consecutive;

    if (consecutive%2 == 0)
    {
        cout <<consecutive << " - Even Number " << endl;
        }      

    else
    {
        cout <<consecutive << " - Odd Number " << endl;
    }
    
    while(consecutive != range)
    {
        cin >> consecutive;

        if (consecutive%2 == 0)
        {
        cout <<consecutive << " - Even Number " << endl;
        }      

        else
        {
        cout <<consecutive << " - Odd Number " << endl;
        }

    }

    return 0;
}