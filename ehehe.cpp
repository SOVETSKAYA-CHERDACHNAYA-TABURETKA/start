#include <iostream>
#include <cmath>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    int count = 0;
    int sum = 0;
    char q;
    int list[100] = {};
    float res;
    for(int i = 0; i<size(list); i++)
    {
        cout << "insert a number. fin?(y/n)" << endl;
        cin >> q;
        if(q == 'y' || q == 'Y')
        break;
        cin >> list[i];
        sum += list[i];
        count ++;
    }
    res = sum/count;
    cout << "median is " << res << endl;
    return 0;
}