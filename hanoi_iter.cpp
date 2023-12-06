#include<iostream>
#include<cmath>   
using namespace std;    
int max(int a)            //возвращает максимальный показатель степени числа 2
{                         //который показывает уровень надстройки
    int p = 1,temp, p1;
    while (pow(2, p) <= a)
    {
        temp = pow(2, p);
        if (a % temp == 0 && temp <= a)
                   p1 = p;
        p++;
    }   
    return p1;
}
 int step(int a)  /*номер позиции для четных номеров*/
{       
    return a / pow(2,max(a));
}
int count_step_define(int a, bool rev_along)/*возвращает номер колышка с которого будет очередной шаг*/
{       
    if (rev_along)
    {   
        int temp = ((step(a) - 1) / 2) % 3;
        if (max(a) % 2 == 0)
            return 1 + temp;
        else
        {
            if(1 - temp == 0)
                    return 3;
            else
                    return 1 - temp > 0? 1 - temp: 2;
        }
    }        
    else
            return 1 + ((a - 1) / 2) % 3;
}
int main()
    {
    unsigned long long n, loop, a = 1;      
    cin >> n;   /*количество дисков*/
    loop = pow(2, n) - 1;   /*количество требуемых перемещений*/    
    while (a <= loop)
    {   
        int temp, over;
        if (a % 2 == 1)
        {               
              temp = count_step_define(a,0);
             (temp + 1 > 3)? over = 1: over = temp + 1;         
        }
        else
        {                
             temp = count_step_define(a,1);
             if (max(a) % 2 == 0)                
                 (temp + 1 > 3)? over = 1: over = temp + 1;              
             else                
                 (temp - 1 < 1)? over = 3: over = temp - 1;             
        }
        cout << temp << " - >" << over << endl;/*с какого и на какой колышек переместить*/
        a++;            
    }       
     system("pause");
    return 0;
    }