//Average 2
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c;

    cin>>a>>b>>c;

    a = (a*2 + b*3 + c*5)/(2+3+5);
    printf("MEDIA = %.1f\n", a);
    return 0;
}
