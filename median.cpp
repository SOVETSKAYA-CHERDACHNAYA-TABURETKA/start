#include <iostream>
using namespace std;

int main()
{
char buf;
int count = 0;
double num;
double sum;
do
{
   cout << "insert a number " << endl;
   cin >> num;
   sum += num;
   count ++;
cout << " das all? (y/n)" << endl;
cin >> buf;
} while (buf !='y' && buf != 'Y');
cout << sum/count;




    return 0;
}
