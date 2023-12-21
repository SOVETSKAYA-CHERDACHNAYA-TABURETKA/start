#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter the number of measurements: ";
    int N;
    cin >> N;
    double seq[N] = {};
    cout << "Input every measurement with a dot as a decimal point pressing enter inbetween." << endl;
    for(int i = 0; i<N; i++)
    {
        cin >> seq[i];
        cout << "Measurement #" << i << ": " << seq[i] << "; "<< endl;
    }
    cout << "For a linear approximation a method of paired points will be used."<< endl;
    double pair_seq_L[N/2] = {};
    for(int i = 0; i<=N/2; i++)
    {
        pair_seq_L[i] = seq[i];
    }
    double pair_seq_R[N/2] = {};
    for(int i = N/2; i<N; i++)
    {
        pair_seq_R[i-N/2] = seq[i];
    }
    for(int i = 0; i<N/2; i++)
    {
        cout << "Pair " << i+1 << ": " << pair_seq_L[i] <<"; "<< pair_seq_R[i] << " ." << endl;
    }
    return 0;
}