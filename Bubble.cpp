#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void swap1(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void swap3(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

//return by reference
int & max(int &x, int &y)
{
    if ( x > y)
        return x;
    return y;
}

int main12121()
{
    int m = 2;
    int n = 4;
    cout << "M : " <<m << " N : " << n << endl;
    swap(m, n);
    cout << "M : " <<m << " N : " << n << endl;
    swap1 (&m, &n);
    cout << "M : " <<m << " N : " << n << endl;


    max(m, n) = -1; //function call return the ref to either m or n depemdng on which is bigger, so can be on the left
    //function should not be made to return ref to auto variable, this would result in warning from compiler

    int numArray[10] = {1,7,4,6,2,9,5,3,0, 8};
    int temp = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 1; j < (10 - i); j++) {

            if (numArray[j - 1] > numArray[j]) {
                swap(numArray[j - 1] , numArray[j]);
            }

        }
    }
    for (int i = 0; i < 10; i++) {
        cout << numArray[i];
    }

    return 0;
}