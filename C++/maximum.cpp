#include <iostream>
using namespace std;
int main() {
    int d,x,y,z;
    cin>>d>>x>>y>>z;
    int s1 = x*7;
    int s2 = y*d + z*(7-d);
    if(s1>s2)
    cout<<s1<<endl;
    else
    cout<<s2<<endl;
    return 0;
}