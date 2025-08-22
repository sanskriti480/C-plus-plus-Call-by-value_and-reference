//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 10

#include <iostream>
using namespace std;

//Pass by reference
void swap(int &x,int &y)
{
    int z;
    z=x;
    x=y;
    y=z;
}
int main()
{
    int a=45,b=35;
    cout<<"Before Swap\n";
    cout<<"a="<<a<<" "<<"b="<<b<<"\n";
    
    swap(a,b); 
    cout<<"After Swap\n";
    cout<<"a="<<a<<" "<<"b="<<b<<"\n";
    return 0;
}

/*Output

Before Swap
a=45 b=35
After Swap
a=35 b=45
*/
