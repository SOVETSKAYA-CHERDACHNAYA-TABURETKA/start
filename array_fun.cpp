#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
srand(time(NULL));
int N;
cout << "enter array length ";
cin >> N;
int sum;
int sum_D;
float mid;
cout << endl;
int arr[N] = {};
int arr_D[N]  = {};
cout << "The resulting random array is below:" << endl;
for(int i = 0; i<N; i++)
{
    arr[i] = rand()%10;
    cout << arr[i] << "; ";
    sum += arr[i];
}
    int buf;
    int l_bord = 1;
    int r_bord = N-1;
    while(l_bord <= r_bord)
    {
        for(int i = r_bord; i>=l_bord; i--)
        if(arr[i-1]<arr[i])
        {
        buf = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = buf;
        };
        l_bord++;
        for (int i = l_bord; i <= r_bord; i++)
        {
        if (arr[i - 1] < arr[i])
        {
        buf = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = buf;   
        }
        };
        r_bord--;


    }
cout << endl;
mid = sum/N;
//dubcount = 0;
//int measure = 0;
/*for(int i = 0; i<N-1; i++)
{
    if(arr[i] == measure)
    {
        dubcount ++;
        cout << "Dublicates of number " << measure << ": " << dubcount << "..." << endl;
    }
    else
    {
        measure ++;
    }
}*/
cout << "Deviation list:" << endl;
for(int i = 0; i<N; i++)
{
    arr_D[i] = (arr[i] - mid);
    cout << arr_D[i] << "; ";
}
for(int i = 0; i<N; i++)
{
    sum_D += (arr_D[i]*arr_D[i]);
}
float MCD;
MCD = sqrt(sum_D/(N-1));
cout << endl << "sorted list is below:" << endl;
for(int i = 0; i<N; i++)
{
    cout << arr[i] << "; ";
}
int dubcount = 0;
/*for(int i = N-1; i>0; i--)
{
    if(arr[i-1] == arr[i])
    {
    dubcount++;
    }
}*/
//cout << endl << "Overall dublicates quantity is " << dubcount << endl;
int min = arr[N-1];
int max = arr[0];
cout << endl << "The biggest is " << max << endl;
int count = 0;
for(int i = 0; i<N; i++)
{
    if(arr[i] == max)
    count ++;
}
cout << "With " << count << " duplicates" << endl;
count = 0;
cout << "The smallest is " << min << endl;
for(int i = 0; i<N; i++)
{
    if(arr[i] == min)
    count ++;
}
cout << "With " << count << " duplicates" << endl;

cout << "The median is " << mid << endl;
cout << "The median quadratic deviation is " << MCD << endl;
cout << "That meant that most frequent maximum is " << mid + MCD << endl << "And the most frequent minimum is " << mid - MCD << endl;
    return 0;
}