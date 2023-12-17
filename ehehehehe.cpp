#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int start = 97;
    int end = 122;
    int buf;
    char arr2[20];
    srand(time(NULL));
    for(int i = 0; i<20; i++)
    {
        arr2[i] = rand()%(end-start+1)+start;
        cout << arr2[i] << endl;
    }
    int l_bord = 1;
    int r_bord = size(arr2)-1;
    while(l_bord <= r_bord)
    {
        for(int i = r_bord; i>=l_bord; i--)
        if(arr2[i-1]>arr2[i])
        {
        buf = arr2[i];
        arr2[i] = arr2[i - 1];
        arr2[i - 1] = buf;
        };
        l_bord++;
        for (int i = l_bord; i <= r_bord; i++)
        {
        if (arr2[i - 1] > arr2[i])
        {
        buf = arr2[i];
        arr2[i] = arr2[i - 1];
        arr2[i - 1] = buf;   
        }
        };
        r_bord--;


    }
    cout << "sorted " << endl;
for(int i = 0; i<20; i++)
{
    cout << arr2[i] << endl;
}
    return 0;
}