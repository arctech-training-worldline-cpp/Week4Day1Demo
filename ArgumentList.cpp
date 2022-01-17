#include <iostream>
#include <cstdarg>

using namespace std;


int findMaximum(int count, ...)
{
    int max, value;
    va_list list; //declare the varibale argument list
    va_start (list, count); //start accessing the varibale argument list

    max = va_arg(list, int); //extract the element of the list
    for (int i = 1; i < count; i++)
    {
        value = va_arg(list, int);
        if(max < value)
            max = value;
    }
    va_end(list); //closing the iteration of the parameter lst
    
    return max;
}

int main5555()
{
    cout << "Maximum is : " << findMaximum(4, 8,1,2,6) << endl;    
    return 0;
}

