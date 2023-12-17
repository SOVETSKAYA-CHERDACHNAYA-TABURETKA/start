#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count;
    int sum = 0;
   // int g_sum = 1;
    char q;
    while (true)
    {
        cout << "insert a number " << endl;
        int num;
        cin >> num;
        sum +=num;
    //    g_sum = g_sum*num;
        ++count;
        cout << "fin? (y/n)" << endl;
        cin >> q;
        if(q == 'y' || q == 'Y')
        break;

    }
    cout << "arithmetic median is " << (static_cast<double>(sum) / count) << endl;
    //float r_count;
    //r_count = 1/count;
    //cout << "geometric median is " << pow(g_sum, r_count);
    
    return 0;

}