#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int min_bord = 0;
    int max_bord = 19; 
    int arr[20] = {};
    int sum = 0;
    int min = 0;
    int max = 0;
    srand(time(NULL));// srand - seed random 
    for(int i = 0; i<20; i++)
    {
        arr[i] = rand()%10;
        cout << arr[i] << endl;
        sum += arr[i];
        if(arr[i]<min)
        {
            min = arr[i];
        }
        else if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    float mid;
    mid = sum/20;
    cout << "The biggest " << max << endl;
    cout << "The smallest " << min << endl;
    cout << "The average " << mid << endl;
    int l = NULL;
while (min_bord<max_bord)
{
    for(int i = 0; i<min_bord; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
            l = i;
        }
    }
    max_bord = l;
    if(l == NULL)
    {
        break;
    }
    l = 20;
    for(int i = max_bord - 1; i>=min_bord; i--)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
            l = i;
        }
    }
    min_bord = l+1;
}
for(int i = 0; i<20; i++)
{
    cout << arr[i] << endl;
}

    return 0;
}