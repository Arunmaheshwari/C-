#include<iostream>
using namespace std;

int main(){

    int n,m;                                // n= no. of rows, m= no. of coloums
    cin>>n>>m;

    int array[n][m];

    for(int i=0; i<n; i++){                       //i= row element, j= coloum element
        for(int j=0; j<m; j++){
            cin>>array[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }
    return 0;  