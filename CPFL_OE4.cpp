//Name: Denver S. Reyes
//Activity: OE4
//Description: We are tasked with creating three hollow triangles using nested for loops, and all elements must be created dynamically.
//Date: 10-14-2021

#include <iostream>
using namespace std;

int main()
{
    int height;

    
    cout << "Enter the height of the triangle : "; 
    cin >> height;

    //Main Loop
    for (int i = 1; i <= height; i++)
    {
        //First Pyramid
        for (int j = 1; j <= (height - i); j++)
        {
            cout << " ";
        }

        
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == height)
            {
                
                cout << "*";
            }
            else
            {
                
                cout << " ";
            }

        }
        
         cout << " ";

        //Second Pyramid
        for (int j = 1; j <= (height - i); j++)
        {
            cout << "  ";
        }

        
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == height)
            {
                
                cout << "*";
            }
            else
            {
                
                cout << " ";
            }

        }
        cout << " ";

        //Third Pyramid
        for (int j = 1; j <= (height - i); j++)
        {
            cout << "  ";
        }

        
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == height)
            {
                
                cout << "*";
            }
            else
            {
                
                cout << " ";
            }

        }

        
        cout << endl;
    }
    return 0;
}