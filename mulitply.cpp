#include <iostream>
#include <string>
using namespace std;

int main()
{/*for(int i = 1; i<10; i++)
{
    cout << i << " * " << i << " = " << i*i << endl;
}*/
for(int i = 1; i<10; i++)
{cout << "" << endl;
    for(int j = 1; j<10; j++)
    {
        if(i*j < 10)
        {
        cout  << " " << i*j << "  | " ;
        }
        else
        {
        cout  << " " << i*j << " | " ;
        }
    }
    
}
    return 0;


}