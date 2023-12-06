#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    /*int tower_1[8], tower_2[8], tower_3[8];
    for(int i = 0; i <=8; i++)
    {
        tower_1[i] = i+1;
    }
    cout << "tower 1 " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << tower_1[i] << endl;
    }

    for(int i = 0; i<=7; i++)
    {
        if(tower_2[i] = 0)
        {
            tower_2[i] = tower_1[i];
            tower_1[i] = 0;
        }
        else if(tower_2[i+1] > tower_1[i])
        {
            tower_3[i] = tower_1[i];
            tower_1[i] = 0;
        }
        else if (tower_3[i+1] > tower_1[i])
        {
            tower_2[i] = tower_1[i];
            tower_1[i] = 0;
        }
    }
cout << "tower 1 new " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << tower_1[i] << endl;
    }
cout << "tower 2 new " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << tower_2[i] << endl;
    }
cout << "tower 3 new " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << tower_3[i] << endl;
    }
    */

   int tower_start[8], tower_finish[8], tower_temp[8];
   //filling 1st tower with disks
   for(int i = 0; i<8; i++)
   {
    tower_start[i] = i;
    cout << tower_start[i] << endl;
   }
   //picking 1st disk and trying to move it to the finish tower
   for(int i = 0; i<8; i++)
   {
    if(tower_finish[i+1] < tower_start[i])
    {
        tower_finish[i] == tower_start[i];
    }
    else if(tower_finish[i+1]>tower_start[i])
    {
        tower_temp[i] = tower_start[i];
    }
    else
    {
        cout << "error" << endl;
    }
   }

    for(int i = 0; i<8; i++)
    {
        cout << tower_start[i] << endl;
    }
     for(int i = 0; i<8; i++)
    {
        cout << tower_finish[i] << endl;
    }
     for(int i = 0; i<8; i++)
    {
        cout << tower_temp[i] << endl;
    }

    return 0;
}