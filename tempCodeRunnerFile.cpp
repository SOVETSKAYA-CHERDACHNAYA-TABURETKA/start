#include <iostream>
#include <time.h>
using namespace std;
void arr_in(int N,int arr[])
{
    for(int i = 0; i<N; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int N;
    cin >> N;
    int a[N] = {};
    arr_in(N, a);
    return 0;
}