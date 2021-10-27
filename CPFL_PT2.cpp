//Name: Denver S. Reyes
//Activity: PT1
//Description: Interactive odd/even number scheme using while loop and if conditional statement
//Date: 10-27-2021

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

//function for monetary formatting
struct group_facet: public numpunct<char> {
    protected:
        string do_grouping() const { return "\003"; }
};

// First function prototypes
void promptAndWait(int& ans);

/* Function takes two arguments: one float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value.*/
void dollarsToPeso(float conversionRate, unsigned dollarsIn);

void PesoTodollars(float conversionRate1, unsigned pesoIn);

int main(){
    //Declare the variables for the user input.
    float conversionRate = 50.73, conversionRate1 = 0.020; // $1 = 50.73 Pesos
    unsigned dollarsIn, pesoIn;
    int ch, ans=0;

    do{
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[0] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                dollarsToPeso(conversionRate, dollarsIn = 1); // Show the exchange rate by calling the function.
                // Prompt the user and take US dollars input.
                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal) : [####] ";
                cin >> dollarsIn;
                dollarsToPeso(conversionRate, dollarsIn); // Show the conversion by calling the function.
                promptAndWait(ans); // Call the promptAndWait() function.
                break;
            }

            case 2:{
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                PesoTodollars(conversionRate1, pesoIn = 1); // Show the exchange rate by calling the function.
                cout << "Enter a PHP amount (without the peso sign, commas or a decimal) : [####] ";
                cin >> pesoIn;
                PesoTodollars(conversionRate1, pesoIn);
                promptAndWait(ans);
                break;
            }
            case 0:{
                cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:{
                cout << "Invalid Input!";
                promptAndWait(ans);
                break;
            }
        }
    }while(ans == 1);  
} //End of main function

// Define the promptAndWait() function.
void promptAndWait(int& ans){
    cout << "Do you want to continue? " << endl;
    cout << "[1] YES" << endl;
    cout << "[2] NO" << endl;
    cin >> ans;  
}

// Define the dollarsToPeso function.
void dollarsToPeso(float conversionRate, unsigned dollarsIn){
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\n$" << dollarsIn << " US = " << (conversionRate * dollarsIn) << " Pesos. \n";
}

// Define the PesoTodollars function.
void PesoTodollars(float conversionRate1, unsigned pesoIn){
// Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\nP" << pesoIn << " Php = " << (conversionRate1 * pesoIn) << " USD. \n";
}