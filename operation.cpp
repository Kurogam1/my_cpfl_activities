#include <iostream>
using namespace std;
int main(void) {
int i, j, k;

cout << "Enter i: ";
cin >> i;
cout << "Enter j: ";
cin >> j;

i+2;
j-=i;
k = i / j;
k+=k;
k-1;
j = k % i;
i += (k+k);
(k+=k)/j;
k = (k^3);
k +=(i*j);
cout << k;
return 0;
}