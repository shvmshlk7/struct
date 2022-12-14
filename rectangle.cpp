#include<iostream>
using namespace std;

struct rectangle
{
    int l;
    int b;
    
};

int main()
{
    struct rectangle r1={10,5};

    r1.l=50;
    r1.b=70;

    cout<<r1.l<<endl;
    cout<<r1.b<<endl;

    return 0;
}
