#include <iostream>
#include <string>
using namespace std;

int main()
{
float e1x1;
float e1y1;
float e1x2;
float e1y2;
float e2x1;
float e2y1;
float e2x2;
float e2y2;
float sx;
float sy;
float ke1;
float ke2;
float be1;
float be2;


cout << "Insert 1st eye's 1st coordinates" << endl;
cin >> e1x1;
cin >> e1y1;
cout << "insert 1st eye's 2nd coordinates" << endl;
cin >> e1x2;
cin >> e1y2;
cout << "insert 2nd eye's 1st coordinates" << endl;
cin >> e2x1;
cin >> e2y1;
cout << "insert 2nd eye's 2nd coordinates" << endl;
cin >> e2x2;
cin >> e2y2;

ke1 = (e1y2 - e1y1) / (e1x2 - e1x1);
cout << "The 1st eye's linear coefficient is " << ke1 << endl;
ke2 = (e2y2 - e2y1) / (e2x2 - e2x1);
cout << "The 2nd eye's linear coefficient is " << ke2 << endl;
be1 = e1y1 - ke1 * e1x1;
cout << "The shift coefficient for 1st eye is " << be1 << endl;
be2 = e2y1 - ke2 * e2x1;
cout << "The shift coefficient for 2nd eye is " << be2 << endl;

sx = (be2 - be1)/(ke1 - ke2);
sy = ke1*sx + be1;
cout << "The stronghold coordinates are (" << sx << "," << sy <<") with around 5 blocks accuracy." << endl;
    return 0;
};