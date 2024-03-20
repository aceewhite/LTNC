#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a;
    string b;
    cin>>a>>b;
    int len1=a.size();
    int len2=b.size();
    string c=a+b;
    swap(a[0],b[0]);
    cout<<len1<<" "<<len2<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b;
    return 0;
}

