#include <iostream>
using namespace std;
int main(){
    int amin,bmin,cmin,tmin,a,b,c;
    cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
    if(a>=amin && b>=bmin && c>=cmin && (a+b+c)>=tmin)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}