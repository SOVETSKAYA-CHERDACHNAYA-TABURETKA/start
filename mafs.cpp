#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
double k;
double b;
char ans;
cout << " which operation will be preformed? 1 - y = kx+b; 2 - y = x^2; 3 - y = 1/x; 4 - y = |x|" << endl;
cin >> ans;
switch(ans)
{
case ('1'):
    cout << "insert k and b coefficients in that order " << endl;
    cin >> k;
    cin >> b;
    for (float i = -10; i<11; i = i+0.1)
    {
        cout << i << endl;
        cout << k*i+b << endl;
    }
    break;
case ('2'):
    for (float i = -10; i<11; i = i+0.1)
    {
        cout << i << endl; 
        cout<< i*i << endl;
    }
    break;
case ('3'):
    for (float i = -10; i<11; i = 1+0.1)
    {
        cout << i << endl;
        cout << 1/i << endl;
    }
    break;
case ('4'):
    for (float i = -10; i<11; i = i+0.1)
    {
        cout << i << endl;
        cout << log(i) << endl;
    }
default:
    break;
};

    return 0;
}