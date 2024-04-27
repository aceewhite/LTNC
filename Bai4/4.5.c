#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,sum1,sum2;
    sum1=0;
    sum2=0;
    cin>>n;
    int a[n];
    int b[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum1=sum1+a[i];
    }
    for(int i=0;i<n+1;i++){
        cin>>b[i];
        sum2=sum2+b[i];
    }
    //cout<<sum1<<" "<<sum2;
    int sum3;
    sum3=sum2-sum1;
    cout<<sum3;
    return 0;
}

