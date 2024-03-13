#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max(int a,int b,int c,int d){
    int max=0;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    if(max<d){
        max=d;
    }
    if(max<a){
        max=a;
    }
    return max;
}
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(a,b,c,d);
    return 0;
}
