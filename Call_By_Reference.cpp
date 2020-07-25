#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
int swap;
swap = *x;
*x = *y;
*y=swap;

}

int main()
{
    int x = 500, y = 700;
    cout<<"Before swap "<<endl;
    cout<<"Value of x is "<<x<<endl;
    cout<<"Value of y is "<<y<<endl;

    swap(&x, &y);
    cout<<"After swap"<<endl;

    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of y is: "<<y<<endl;
    return 0;

}
