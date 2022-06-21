//Average 1
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b;

    cin>>a>>b;

    a = (a*3.5 + b*7.5)/(3.5+7.5);
    printf("MEDIA = %.5f\n", a);
    return 0;
}
