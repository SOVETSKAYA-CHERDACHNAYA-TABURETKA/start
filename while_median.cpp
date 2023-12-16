#include <iostream>
#include <cmath>
using namespace std;
/*
int main()
{
    char q;
    int count;
    int num;
    float a_median;
    //float g_median;
    //int g_sum = 1;
    cout << "insert numbers to sum and calculate median from: " << endl;
    do
    {
        
        cin >> num;
        count ++;
        num += num;
        cout << num << endl;
       // g_sum = g_sum*num;
       // cout << g_sum << endl;
        cin >> q;
    } while (q != 'y');
    cout << "the quantity of numbers is " << count << endl;
    cout << "the sum is " << num << endl;
    a_median = num/count;
    cout << "the arythmenic median is " << a_median << endl;
   // g_median = pow(g_sum, 1/count);
   // cout << "the geometrical median is " << g_median;
    return 0;
}
*/
int main()
{
    int count;
    int sum;
    int g_sum = 1;
    char q;
    while (true)
    {
        cout << "insert a number " << endl;
        int num;
        cin >> num;
        sum +=num;
        g_sum *=num;
        ++count;
        cout << "fin? (y/n)" << endl;
        cin >> q;
        if(q == 'y' || q == 'Y')
        break;

    }
    cout << "arithmetic median is " << sum/count << endl;
    cout << "geometric median is " << pow(g_sum, count);
    
    return 0;

}