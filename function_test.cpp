#include <iostream>
#include <time.h>
using namespace std;
void arr_in(int N,float arr[])
{
    for(int i = 0; i<N; i++)
    {
        cin >> arr[i];
    }
}

void arr_out(int N, float arr[])
{
    for(int i = 0; i<N; i++)
    {
        cout << arr[i] << endl;
    }
}

double median(int N,float arr[])
{
    float sum = 0;
    for(int i = 0; i<N; i++)
    {
        sum += arr[i];
    }
    return static_cast<float>(sum/N);
}

int main()
{
    int N;
    cout << "Size: ";
    cin >> N;
    cout << endl;
    float a[N] = {};
    arr_in(N, a);
    arr_out(N, a);
    cout << median(N, a);
    return 0;
}