#include <iostream>
using namespace std;
int giaithua(int n) {
    if(n==1)
        return 1;
    else 
        return n*giaithua(n-1);
}
// int giaithua(int n) {
//     int kq=1;
//     for(int i=1;i<=n;i++) {
//         kq=kq*i;
//     }
//     return kq;
// }
int main() {
    cout<<giaithua(5);
}