#include <iostream>
#include<string>
using namespace std;


int buf()
{
    int i;
    i++;
}

void move_disk(char p1, char p2)
{
    cout << "from " << p1 << " to " << p2 << endl;
    buf();
}

void move_tower(int disks, char p1, char p2, char tmp )
{
   
    if (disks == 0)
    {
        return;
    }
    move_tower(disks - 1, p1, tmp, p2);
    move_disk(p1, p2);
    move_tower(disks-1, tmp, p2, p1);
}

int main()
{
    const int disk = 8;
    const int pole = 3;
    int space [disk][pole] = {0};
    move_tower(disk, 'A', 'B', 'C');
    cout << buf();
};