#include <iostream>
using namespace std;

int main()
{
int finish;
cout << "prime number border is " << endl;
cin >> finish;
double a[finish + 1];
for(int i = 0; i<finish; i++)
{
    a[i] = i;
}
for(int i = 2; i*i<=finish; i++)
{
    if(a[i])
    {
    for(int j = i*i; j <= finish; j+=i)
    {
        a[j] = 0;
    }
    }
}

for(int i = 2; i < finish; i++)
{
    if(a[i])
    {
        cout << a[i] << endl;
    }
}
cout << endl << endl;
delete[] a;
    return 0;
}