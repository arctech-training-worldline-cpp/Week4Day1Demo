#include <iostream>

using namespace std;

int main()
{
    /*
    //3 X 2 - 3 rows and 2 columns
    int x[3][2] = {{0,1},{2,3},{4,5}};
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            cout << "Element at x[" << r << "][" << c << "] : " << x[r][c] << endl; 
        }        
    }
    */
   /*
   int *p = new int[5]{100,11,22,33,44};
    cout << *p << endl;
    cout << (p + 1) << endl;
    */
   int cnt = 1;
   int N = 3;
   int **p = new int *[N];

    for (int i = 0; i < N; i++)
    {
        p[i] = new int[N];    
        for (int j = 0; j < N; j++)
        {
            //p[i][j] = 10 * cnt;

            *(*(p + i) + j)  = 10 * cnt;
            cnt++;
        }            
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "Element at p[" << i << "][" << j << "] : " << p[i][j] << endl; 
        }
        
    }

    cout << endl << "------------" << endl;
    cout << *p << endl;
    cout << **p << endl;

    cout << *p + 1 << endl;
    cout << **(p + 1) << endl;
    cout << p[1][0] << endl;
    return 0;
}
