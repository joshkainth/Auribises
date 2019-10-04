#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c,d;
    cin >> a;
    cin >> b;
    long int v[1000000][1000000];
    for(int i=0;i<a;i++){
        cin>>c;
        for(int j=0;j<c;j++)
            cin>>v[i][j];
    }
    for(int k=0;k<b;k++){
        cin>>c>>d;
        cout<<v[c][d]<<endl;
    } 
    return 0;
}

