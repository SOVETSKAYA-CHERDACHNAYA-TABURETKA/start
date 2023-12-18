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
int arr_d[10] = {0};
for(int i = 0; i<10; i++)
{
    for(int j = 0; j<N; j++)
    {
        /*switch (arr[i])
        {
        case (arr[i] == 1):
            arr_d[0]+=1;
            break;
        case (arr[i] == 2):
            arr_d[1]+=1;
            break;
        case (arr[i] == 3):
            arr_d[2] +=1;
            break;
        case (arr[i] == 4):
            arr_d[3] +=1;
            break;
        case (arr[i] == 5):
            arr_d[4] +=1;
            break;
        case (arr[i] == 6):
            arr_d[5] +=1;
            break;
        case (arr[i] == 7):
            arr_d[6] +=1;
            break;
        case (arr[i] == 8):
            arr_d[7] +=1;
            break;
        case (arr[i] == 9):
            arr_d[8] +=1;
            break;
        case (arr[i] == 0):
            arr_d[9] +=1;
            break;
        
        default:
            break;
            */
        if(arr[j] == i)
        {
            arr_d[i] +=1;
        }
    }
}

for(int i = 0; i<10; i++)
{
    if(arr_d[i] >=1)
    {
        cout << "dupes of "<< i << ": " << arr_d[i] << endl;
        d_c += (arr_d[i]-1);
    }
}
cout << "dupes overall " << d_c << endl;
    return 0;
}