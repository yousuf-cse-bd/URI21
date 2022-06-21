///Area of Circle 
#include <iostream>
#define pi 3.14159
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    double r;
    cin>>r;

    r = pi*r*r;
    printf("A=%.4lf\n",r);
    return 0;
}
