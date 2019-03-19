#include <iostream>
#include <cmath>
#include <ctime>
#include <wchar.h>
using namespace std;

int main()
{
    clock_t start;
    double duration;
    float d1;
    float d2;
    float volume = .0;
    float plane = .0;
    float line = .0;
    int L = 800;
    double t1 = clock();
    for (int i = 1; i <= L; i++)
    {
        for (int j = 1; j <= L; j++)
        {
            d1 = i*i + j*j;
            if ((i + j) % 2 == 0)
                {
                    plane += 1 / sqrt(d1); 
                }
                else
                {
                    plane -= 1 / sqrt(d1);
                }
            for (int k = 1; k <= L; k++)
            {
                d2 = d1 + k*k;
                if ((i + j + k) % 2 == 0)
                {
                    volume += 1 / sqrt(d2); 
                }
                else
                {
                    volume -= 1 / sqrt(d2);
                }
            } 
        } 
    }
    for (int i = 2; i <= L; i += 2)
    {
        line += 1 / i;
    }
    for (int i = 1; i <= L; i += 2)
    {
        line -= 1 / i;
    }


    cout << (8 * volume + 12 * plane + 6 * line) << endl; 
    duration = ( std::clock() - t1 ) / (double) CLOCKS_PER_SEC;
    cout << duration << endl;
    return 0;
}
