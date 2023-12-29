#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
using namespace std;

void arr_in(int length, float arr[length])
{
    for(int i = 0; i<length; i++)
    {
        cout << "Insert a number " < endl;
        cin >> arr[i];
    }
}
void arr_out(int length, float arr[length])
{
    for(int i = 0; i<length; i++)
    {
        cout << arr[i] << endl;
    }
}
void arr_rand(int length, float arr[length])
{
    srand(time(NULL));
    for(int i = 0; i<length; i++)
    {
        arr[i] = rand()%100;
    }
}
void shaker_sort(int length, float arr[length])
{
    int buf;
    int N = length;
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
}
float median(int length, float arr[length])
{
    float sum = 0;
    for(int i = 0; i<length; i++)
    {
        sum += arr[i];
    }
    double mid;
    mid = sum/N;
    return mid;
}
double MCD(int length, float arr[length])
{
    int N;
    N = length;
    float mcd;
    int sum_D = 0;
    for(int i = 0; i<length; i++)
    {
        sum_D += (arr[i] - median(N, arr[N]))*(arr[i] - median(N, arr[N]));
    }
    mcd = sqrt(sum_D/(N-1));
    return mcd;
}
int main()
{
    string quest;
    cout << "Will there be any predetermined numbers or is random sequence needed? (Random/Sequence)" << endl;
    cin >> quest;
    cout << "How long is the list going to be? " << endl;
    int N;
    cin >> N;
    float arr[N] = {};
    if(quest == "Random" || quest == "random")
    {
        arr_rand(N, arr[N]);
        cout << "Is sorting needed? (y/n)" << endl;
        char ans;
        cin >> ans;
        if(ans == y)
        {
            shaker_sort(N, arr[N]);
            cout << "Here's your sorted list:" << endl;
            arr_out(N, arr[N]);
        }
        else
        {
            cout << "Here's your list: " << endl;
            arr_out(N, arr[N]);
        }
    }
    else
    {
        cout << "Insert numbers below: " << endl;
        arr_in(N, arr[N]);
    }
    return 0;
}