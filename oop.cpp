#include <iostream>
#include <string>
using namespace std;

class point{
public:
point(int val_x, int val_y){
    x = val_x;
    y = val_y;
    cout << this << " sdelal";
}
point(){
x = 0;
y = 0;
    cout << this << " umer";
};
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
private:
bool chvolt(){
    
return true;
};
public:
void start(){
    setlocale(LC_ALL, "en");
    bool voltnorm = chvolt();
    if (voltnorm ==  true){
    cout << "ahhhh " << "..."<< endl;
    }
    else{
    cout << "critikal error " << endl;
    };
    
};

};


int main(){
    grinder vitek;
    vitek.start();
    point a(9,9);

    return 0;
    
};
