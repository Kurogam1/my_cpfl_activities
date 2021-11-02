//Name: Denver S. Reyes
//Activity: OE5
//Description: We are tasked with developing a console program that will reverse the user's input by utilizing a function with parameter and a void function.
//Date: 11-02-2021

#include <iostream>

using namespace std;
// Function Declaration
void promptAndWait();
void reversestr(string str);
void reverseint(unsigned int n);

int main(){
    string str;
    unsigned int n;
    int ch, wait = 0;

    do{
        system("cls");
        cout << endl;
        cout << "Reverse App" << endl;
        cout << "[1] Reverse a String" << endl;
        cout << "[2] Reverse an Unsigned Integer" << endl;
        cout << "[3] Exit the App" << endl;
        cout << "Select an option : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "<< Reverse a String >>\n" << endl;
                cout << "Enter a word : ";
                cin.ignore();
                getline(cin,str);
                reversestr(str);
                promptAndWait();
                break;
            }

            case 2:{
                cout << "<< Reverse an Unsigned Integer >>\n" << endl;
                cout << "Enter a number [0-9] : ";
                cin >> n;
                cin.ignore();
                reverseint(n);
                promptAndWait();
                break;
            }

            case 3:{
                cout << "Thank you for using the app!!!" << endl;
                return 0;
            }
        }
    }
    while(wait == 0);
}

// Function Definition

void reversestr(string str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++){
        swap(str[i], str[n - i - 1]);
    }

    cout << "Reversed word: "<< str  << endl;  

}

void reverseint(unsigned int n)
{
    int reverse=0, rem;      
    while(n!=0)    
    {    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
    }    

    cout << "Reversed number: " << reverse << endl;
}

void promptAndWait()
{
    cout << "\n" << endl;
    cout << "Press Enter or Return to continue...";
    cin.get();
}
