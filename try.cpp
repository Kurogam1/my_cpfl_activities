#include <iostream>

using namespace std;

int main(){

   int num1, num2;
   int i = 0, n = 0; 

   cout << "Enter set number : ";
   cin >> num1;

    while(i <= num1)
    {
        cout << "Enter " << num1 <<" number(s): " ;
        cin >> num2;
        i++;
    }

    if (num2 % 2 ==0){
        cout << num2 << " is even" <<endl;
    }
 
    else if (num2 % 2 !=0){
        cout << num2 << " is odd" <<endl;
    }

return 0;

}