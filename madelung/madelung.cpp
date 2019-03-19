#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    clock_t start;
    double duration;
    
    double M = .0;
    double d;
    int L = 1500;
    double w = 1;
    double t1 = clock();
    for (int i = 0; i <= L; i++)
    {
        for (int j = 0; j <= L; j++)
        {
            for (int k = 0; k <= L; k++)
            {
                if (i == 0 || j == 0 || k == 0)
                {
                    if ((i == 0 && j == 0) || (i == 0 && k == 0) || (j == 0 && k == 0))
                    {
                        if (i == 0 && j == 0 && k == 0)
                        {
                            continue;
                        }
                        else
                        {
                            w = 0.25;
                        }
                    }
                    else
                    {
                        w = 0.5;
                    }
                }
                else
                {
                    w = 1.0;
                }
                d = sqrt(i*i + j*j + k*k);
                if ((i + j + k) % 2 == 0)
                {
                    M += w / d; 
                }
                else
                {
                    M -= w / d;
                }
            } 
        } 
    }
    cout << 8 * M << endl; 
    duration = ( std::clock() - t1 ) / (double) CLOCKS_PER_SEC;
    cout << duration << endl;
    return 0;
}
