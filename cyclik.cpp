#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int start = -10;
    int end = 10;
    int list[10] = {};
    int temp;
        for(int i = 0; i<10; i++)
    {
        
        list[i]= rand()%(end-start+1)+start;
        cout << list[i] << ';';
    }
    cout << endl;

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (list[j] > list[j + 1]) {
               
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    
    for (int i = 0; i < 10; i++) {
        cout << list[i] << ";";
    }
    cout << endl;

   
    
    return 0;

}