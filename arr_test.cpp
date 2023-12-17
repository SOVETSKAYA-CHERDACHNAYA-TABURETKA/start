#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    cout << "arr size" << endl;
    int N;
    cin >> N;
    srand(time(NULL));
    int arr[N] = {};
for(int i = 0; i<N; i++)
{
    arr[i] = rand()%10;
    cout << arr[i] << endl;
}
int d_c = 0;
cout << endl;
int arr_d[10] = {0,0,0,0,0,0,0,0,0,0};
for(int i = 0; i<10; i++)
{
    for(int j = 0; j<N; j++)
    {
        switch (arr[i])
        {
        case 1:
            arr_d[0]++;
            break;
        case 2:
            arr_d[1]++;
            break;
        case 3:
            arr_d[2] ++;
            break;
        case 4:
            arr_d[3] ++;
            break;
        case 5:
            arr_d[4] ++;
            break;
        case 6:
            arr_d[5] ++;
            break;
        case 7:
            arr_d[6] ++;
            break;
        case 8:
            arr_d[7] ++;
            break;
        case 9:
            arr_d[8] ++;
            break;
        case 0:
            arr_d[9] ++;
            break;
        
        default:
            break;
        }
    }
}
for(int i = 0; i<10; i++)
{
    if(arr_d[i] >=1)
    {
        cout << "dupes " << arr_d[i] << endl;
        d_c += arr_d[i];
    }
}
cout << "dupes " << d_c << endl;
    return 0;
}