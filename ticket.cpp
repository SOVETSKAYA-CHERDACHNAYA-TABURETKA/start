#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum;
    int ticket [5];
    for(int i = 1; i<1000000; i++)
    {
        ticket[0] = i%10;
        cout << ticket[0];
        /*ticket[1] = (i/10)%10;
        cout << ticket[1];
        ticket[2] = (i/100)%10;
        cout << ticket[2];
        ticket[3] = (i/1000)%10;
        cout << ticket[3];
        ticket[4] = (i/10000)%10;
        cout << ticket[4];
        ticket[5] = (i/100000)%10;
        cout << ticket[5];*/

        /*if((ticket[0] + ticket[1] + ticket[2]) == (ticket[3] + ticket[4]+ ticket[5]))
        {
            for(int j = 5; j>=0; j--)
            {
                cout << ticket[j];
            }
            cout << endl;
            sum ++;
        }*/
        
    }
    cout << sum;
    return 0;


}