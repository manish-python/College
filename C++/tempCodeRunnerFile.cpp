#include <iostream> 
using namespace std;
int main(){
    int n,x,y,a,b;
    cin>>n>>x>>y>>a>>b;
    int petrol = n/a*x;
    int diesel = n/b*y;
    if(petrol<diesel){
        cout<<"PETROL"<<endl;
    }
    else if(petrol>diesel){
        cout<<"DIESEL"<<endl;
    }
    else{
        cout<<"ANY"<<endl;
    }

    return 0;
}