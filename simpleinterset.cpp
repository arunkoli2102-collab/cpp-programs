#include <iostream>
using namespace std;
int main() {
    float principal,rate,time,simpleInterset;
    cout<<"Enter principal amount:";
    cin>>principal;
    cout<<"Enter rate of interset:";
    cin>>rate;
    cout<<"Enter the time:";
    cin>>time;
    simpleInterset=principal*time*rate/100;
    cout<<"Simple Interset=" << simpleInterset <<endl;
    return 0;
}