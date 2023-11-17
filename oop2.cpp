#include <iostream>
#include <string>

class point
{
int x,y;
public:
    void set_coord(int set_x, int set_y)
    {
        x = set_x;
        y = set_y;
    } 
};

int main() 
{
    point a;
    setlocale(LC_ALL, "rus");
    return 0;
    point* b = new point();
    b->set_coord(9,9);
};