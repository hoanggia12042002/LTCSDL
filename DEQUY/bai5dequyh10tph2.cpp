#include <iostream>
using namespace std;
void h10toh2(int n) {
    if(n>0) {
        int sd=n%2;
        n=n/2;
        h10toh2(n);
        cout<<sd;
    }
}
int main() {
   h10toh2(13);
}