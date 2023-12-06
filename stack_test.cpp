#include <iostream>
using namespace std;

int main()
{

    int stack1[8] = {0,1,2,3,4,5,6,7};
    for(int i = 0; i<8; i++)
    {
        cout << stack1[i] << endl;
    }
    int stack2[8] = {0,0,0,0,0,0,0,0};
    for(int i = 0; i<8; i++)
    {
        stack2[i] = stack1[i];
        cout << stack2[i] << endl;
    }

    return 0;
}