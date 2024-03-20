#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
string s;
    getline(cin,s);
int hour,minute,second;
string a;
char colon {':'};
hour=stoi(s.substr(0,2));
minute=stoi(s.substr(3,2));
second=stoi(s.substr(6,2));
a=s.substr(8,2);
if(a=="PM"&&hour<12){
    hour+=12;
}
else if(a=="AM"&&hour==12){
    hour=00;
}

cout<<setw(2)<<setfill('0')<<hour<<colon<<setw(2)<<setfill('0')<<minute<<colon<<setw(2)<<setfill('0')<<second;
}
