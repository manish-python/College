#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> vec(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            cin>>vec[i][j];
        }
    }
        for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            cout<<vec[i][j]<<" ";
        }}
    }