#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    float val = 0;
for(int i = 1; i<100001; i++)
{
    val = cos(val);
    cout << val << endl;
}
    return 0;
}
