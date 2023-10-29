#include <iostream>
#include <string>
using namespace std;

class point{
private:
int x;
int y;
public:
int getx(){
    return x;
};
int gety(){
    return y;
};
void setx(int valx){
    x = valx;
};
void sety(int valy){
    y = valy;
};
};

class grinder{
public:
void start(){
    cout << "a"<< endl;
};

};

int main(){
    point a;
    return 0;
    grinder vitek;
    vitek.start();
};
