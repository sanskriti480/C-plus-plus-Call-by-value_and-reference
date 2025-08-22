//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 10

#include <iostream>
using namespace std;

//Call by reference
void swap(int *x,int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main()
{
    int x=500,y=200;
    swap(&x,&y); //passing value to function
    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of y is: "<<y<<endl;
    return 0;
}

//Output

//Value of x is: 200
//Value of y is: 500
