#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
double pi = 2*acos(0.0);
float e1x;
float e1y;
float e1a;
float e2x;
float e2y;
float e2a;
float ke1;
float ke2;
float be1;
float be2;
float sx;
float sy;
cout << "Insert your 1st launch angle" << endl;
cin >> e1a;
if (0< e1a < 180)
{
    e1a+=90;
}
else if (-180 < e1a < -90)
{
    e1a+=420;
}
else 
{
    e1a+=90;
}
cout << e1a << endl;
cout << "Insert your 1st launch coordinates" << endl;
cin >> e1x;
cout << e1x << endl;
cin >> e1y;
cout << e1y << endl;
cout << "Insert your 2nd launch angle" << endl;
cin >> e2a;
if (0< e2a < 180)
{
    e2a+=90;
}
else if (-180 < e2a < -90)
{
    e2a+=420;
}
else 
{
    e2a+=90;
}
cout << e2a << endl;
cout << "Insert your 2nd launch coordinates" << endl;
cin >> e2x;
cout << e2x << endl;
cin >> e2y;
ke1 = tan(e1a*pi/180);
cout << "The linear coefficient for first launch is " << ke1 << endl;
ke2 = tan(e2a*pi/180);
cout << "The linear coefficient for second launch is " << ke2 << endl;
be1 = e1y - ke1*e1x;
cout << "The shift coefficient for the first launch is " << be1 << endl;
be2 = e2y - ke2*e2x;
cout << "The shift coefficient for the second launch is " << be2 << endl;
sx = (be2-be1)/(ke1-ke2);
sy = ke1*sx+be1;
cout << "The stronghold coordinates are " << sx << " ~ " << sy << " ." << endl;
cout << "The distance to the Stronghold is approximately " << (sqrt((sx-e1x)*(sx-e1x)+(sy-e1y)*(sy-e1y))+sqrt((sx-e2x)*(sx-e2x)+(sy-e2y)*(sy-e2y)))/2 << "blocks away.";
    return 0;

}