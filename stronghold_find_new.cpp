#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{          /*Initiating all necessary variables*/
double pi = 2*acos(0.0);// pi constant
float e1x;//first eye x coordinate
float e1y;//first eye y coordinate
float e1a;//first eye horizontal angle
float e2x;//second eye x coodrinate
float e2y;//second eye y coodrinate
float e2a;//second eye horizontal angle
float ke1;//first angular coefficient
float ke2;//second eye angular coefficient
float be1;//first shift coefficient
float be2;//second shift coefficient
float sx;//stronghold x coordinate
float sy;//stronghold y coordinate
cout << "Insert your 1st launch angle" << endl;//requesting 1st eye data input
cin >> e1a;
if (0< e1a < 180)//converting Minecraft angle into mathematical angle by quardants
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
cout << e1a << endl;//outputting 1st angle result to check for errors
cout << "Insert your 1st launch coordinates" << endl;//requesting 1st coordinates
cin >> e1x;
cout << e1x << endl;//output to check for errors
cin >> e1y;
cout << e1y << endl;//output to check errors
cout << "Insert your 2nd launch angle" << endl;//requesting 2nd launch data
cin >> e2a;
if (0< e2a < 180)//same angle conversion
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
cout << e2a << endl;//error check
cout << "Insert your 2nd launch coordinates" << endl;//2nd launch coords request
cin >> e2x;
cout << e2x << endl;
cin >> e2y;
ke1 = tan(e1a*pi/180);//calculating angular coefficient
cout << "The linear coefficient for first launch is " << ke1 << endl;//checking for errors
ke2 = tan(e2a*pi/180);//calculating angular coefficient
cout << "The linear coefficient for second launch is " << ke2 << endl;//checking for errors
be1 = e1y - ke1*e1x;//calcucating frist shift coefficient
cout << "The shift coefficient for the first launch is " << be1 << endl;//error check
be2 = e2y - ke2*e2x;//calculating 2nd shift coefficient
cout << "The shift coefficient for the second launch is " << be2 << endl;//error check
sx = (be2-be1)/(ke1-ke2);//x calculation
sy = ke1*sx+be1;//y calculation - any k and b can be used as the intersection point existis in both equations
cout << "First trajectory equation is y=" << ke1 << "x+(" << be1 << ")."<< endl;//1st launch equation
cout << "Second trajectory equation is y=" << ke2 << "x+(" << be2 << ")."<< endl;//2nd launch equation
cout << "The stronghold coordinates are " << sx << " ~ " << sy << " ." << endl;//resulting coordinates
cout << "The distance to the Stronghold is approximately " << (sqrt((sx-e1x)*(sx-e1x)+(sy-e1y)*(sy-e1y))+sqrt((sx-e2x)*(sx-e2x)+(sy-e2y)*(sy-e2y)))/2 << "blocks away."<<endl;//median distance according to launches, will be updated shortly
    return 0;

}