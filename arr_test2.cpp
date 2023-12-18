#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[20] = {0};
    for(int i =0; i<19; i++)
    {
        arr[i] = rand()%10;
        cout << arr[i] << endl;
    }
    int arrD[10] = {0};
    for(int i =0; i<19; i++)
    {
        if(arr[i] == 0)
        arrD[0] += 1;
        
    }
    cout <<"sus "<< arrD[0];
    return 0;
}