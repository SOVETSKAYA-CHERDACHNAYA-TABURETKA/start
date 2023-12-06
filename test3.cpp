#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
    int list[5];

    for(int i=0; i<=5; i++)
    {
        list[i] = i;
        cout << list[i] << endl;
    }
    */

    int tower_1[7];
    int tower_2[7];
    int tower_3[7];

   for(int i = 0; i <= 7; i++)
   {
        tower_1[i] = i;
        cout << tower_1[i] << endl;
        if(tower_2[i] && tower_3[i] == 0)
        {
            cout << " other two towers are free" << endl;
        }
        else if(tower_2[i] != 0)
        {
            cout << "second tower contains the following ";
            cout << tower_2[i] << endl;
        }
        else
        {
            cout << "third tower contains the following ";
            cout << tower_3[i] << endl;
        }
   }
    return 0;
}
