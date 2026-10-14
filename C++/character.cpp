#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n>>str;
    string tr="",special="";
    for(char ch:str){
        if(isalpha(ch)) tr+=tolower(ch);
        else if (isdigit(ch)) tr+=ch;
        else special+=ch;
    }
    tr+=special;
    cout<<tr;

}