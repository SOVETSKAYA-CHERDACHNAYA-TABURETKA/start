#include <iostream>
#include <cmath>
using namespace std;

int main()
{/*
int range;
cout << "input num range " << endl;
cin >> range;
for(int i = 1; i<range; i++)
{
    if(i%2 != 0)
    {
        cout << i*i << endl;//таки кввдрат
        cout << sqrt(i*i) << endl;//таки проверочка
    }
}*/
int count = 0;
char input;
do
{
   
    cin >> input;
    count ++;
} while (input != '.');
cout << count-1 << endl;
    return 0;

}