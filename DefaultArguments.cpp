#include <iostream>
using namespace std;

float value(float p, int n, float r = 0.15);

void printLine(char ch = '*', int len = 40); //protoype

int main()
{
    printLine();
    cout << endl <<value(500, 2) << endl;
    printLine('_', 50);
    cout << endl << value(500, 2, .19) << endl;
    printLine('#');
    return 0;
}

void printLine(char ch, int len){
    for (int i = 0; i < len; i++)
    {
        cout << ch;
    }    
}

float value(float p, int n, float r)
{
    return ((p*n*r)/1000);
}