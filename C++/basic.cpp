#include <bits/stdc++.h>
using namespace std;
int main(){
    // string s;
    // cin>>s;
    // cout<<s + " a student"<<endl;

    // int n;
    // cin>>n;
    // cout<< n +3<<endl;

    // string name;
    // int age, roll;
    // cin>>name>>age>>roll;
    // cout<<name<<" "<<age<<" "<<roll<<endl;

    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    // cout<<a+b+c+d<<endl;

    // float a;
    // cin>>a;
    // cout<<setprecision(2)<<fixed<<a/2<<endl;

    // int a,b,c;
    // cin>>a>>b>>c;
    // if ((a+b)/2.0 > c) {
    //     cout<<"YES"<<endl;
    // } else {
    //     cout<<"NO"<<endl;
    // }

    // string n,x;
    // cin>>n>>x;
    // if (n.length()+x.length() == 5 ) {
    //     cout<<"YES"<<endl;
    // } else {
    //cout<<"NO"<<endl;

    int arr[7]={10,200,30,40,500,89,100};
    int sum = accumulate(arr+1, arr+3, 0);
    cout << sum << endl;
    }

