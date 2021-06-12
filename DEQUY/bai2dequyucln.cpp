#include <iostream>
using namespace std;
int gcd(int n,int m){
    int r;
    if(n<m) return gcd(m,n);
    r=n%m;
    if(r==0) return m;
    else return gcd(n,r);
}
int main() {
    cout<<gcd(25,5);
}