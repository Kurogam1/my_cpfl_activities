#include<iostream>

using namespace std;

int main(){

    int guess, number =100;
    char ch;

    do{
        cout <<" << Number Guessing Game >> " <<endl;
        cout <<" Press [N] to exit " <<endl;
        cout <<" Enter your guess : " ;
        cin >> guess;

        if(guess > number){
            cout << " Number is too high!" <<endl;
        }
        else if (guess < number){
            cout << " Number is too low!" <<endl;
        }
        else if (guess == number){
            cout << " You guess the right number!" <<endl;
        }
    }while(ch == 'N' || ch == 'n');

    return 0;
}