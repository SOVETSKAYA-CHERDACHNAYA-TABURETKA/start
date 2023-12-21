#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cout << "Insert data range: " << endl;
    cin >> N;
    float x[N] = {0};
    float y[N] = {0};
    float dot_x_L[N/2] = {0};
    float dot_y_L[N/2] = {0};
    float dot_x_R[N/2] = {0};
    float dot_y_R[N/2] = {0};
for (int i = 0; i < N; i++)
{
    x[i] = i;
    cin >> y[i];
}
for(int i = 0; i<=N/2; i++)
{
    dot_x_L[i] = x[i];
    dot_y_L[i] = x[i];
}
for(int i = N/2; i<N; i++)
{
    dot_x_R[i-N/2] = x[i];
    dot_y_R[i-N/2] = y[i];
}
cout << "X sequence" << endl;
for(int i = 0; i<(N/2); i++)
{
    cout << "Pair #" << i+1 << ": " << dot_x_L[i] << "; "<< dot_x_R[i] << " ." << endl; 
}
cout << "Y sequence" << endl;
for(int i = 0; i<(N/2); i++)
{
    cout << "Pair #" << i+1 << ": " << dot_y_L[i] << "; "<< dot_y_R[i] << " ." << endl; 
}
float x_diff[N/2] = {};
float y_diff[N/2] = {};
for(int i = 0; i<(N/2); i++)
{
    x_diff[i] = dot_x_R[i] - dot_x_L[i];
    y_diff[i] = dot_y_R[i] - dot_y_L[i];
}
cout << "The difference sequence:" << endl;
cout << "For X:" << endl;
for(int i = 0; i<N/2; i++)
{
    cout << x_diff[i] << endl;
}
cout << "For Y: " << endl;
for(int i = 0; i<N/2; i++)
{
    cout << y_diff[i] << endl;
}
double ratio_n[N/2] = {};
double ratio_median = 0;
double r_sum = 0;
for(int i = 0; i<(N/2) ; i++)
{
    ratio_n[i] = (y_diff[i]/x_diff[i]);
    r_sum += ratio_n[i];
}
cout << "The ratio sequence: " << endl;
for(int i = 0; i<(N/2); i++)
{
    cout << ratio_n[i] << endl;
}
ratio_median = r_sum/(N/2);
cout << "The median of ratio coefficient is " << ratio_median << endl;
cout << "Now we'll cacluclate MCD: " << endl;
double MCD;
for(int i = 0; i<(N/2); i++)
{
    MCD += pow((ratio_n[i]- ratio_median), 2);
}
MCD = pow(MCD, (2/N));
cout << MCD;
    return 0;
}