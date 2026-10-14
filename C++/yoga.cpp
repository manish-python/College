#include <iostream>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int z;
    // for(int i=0;i<=n/2;i++){
    //     int a=n-2*i;
    //     z=max(z,i*y+a*x);
    // }
    // cout<<z<<endl;
    int ans1=n*x;
    int ans2=(n/2)*y+(n%2)*x;
    cout<<max(ans1, ans2)<<endl;
}
