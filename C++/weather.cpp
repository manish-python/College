#include <iostream>
using namespace std;
int main(){
    int x,y;
    for(int i=0;i<7;i++){
        cin>>x;
        if(x==1)
        y++;
    }
    if(y>3)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}