#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int data_s;
    cout << "Input array size: ";
    cin >> data_s;
    float data[data_s] = {0};
    int m = data_s/2;
    cout << "; Input data " << endl;
    for(int i = 0; i<data_s; i++)
    {
        cin >> data[i];
    };
    float data_L[m] = {0};
    for(int i = 0; i<=(m); i++)
    {
        data_L[i] = data[i];
    };
    float data_R[m] = {0};
    for(int i = m; i<data_s; i++)
    {
        data_R[i-m] = data[i];
    };
    for(int i = 0; i<(m); i++)
    {
        cout << "Pair " << i << ": " << data_L[i] << "; " << data_R[i] << endl;
    };
    return 0;
}