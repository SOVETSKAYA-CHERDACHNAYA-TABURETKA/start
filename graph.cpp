#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
 
 
using namespace std;
 
 
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "rus");
 
    const int H = 15;
    const int W = 56;
 
    char m[H][W];
 
    for (size_t y = 0; y < H; ++y)
        for (size_t x = 0; x < W; ++x)
            m[y][x] = '.';
 
    for (size_t x = 0; x < W; ++x)
    {
        int y = (sin(1.0 * x * 2 * M_PI / W) + 1) / 2 * H;
        if ((y >= 0) && (y < H))
            m[y][x] = '*';
 
    }
 
    for (size_t y = 0; y < H; ++y)
    {
        for (size_t x = 0; x < W; ++x)
            cout << m[y][x];
 
        cout << endl;
    }
 
    system("pause");
    return 0;
}