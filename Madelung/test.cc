#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double M = .0;
    M += 0.1;
    for (int i = 1; i <= 10 ; i++)
    {
        M += 0.5 / (i * i);     
    }
    cout << M << endl; 
}
