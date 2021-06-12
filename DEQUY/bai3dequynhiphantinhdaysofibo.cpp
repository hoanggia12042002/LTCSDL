//Dãy số Fibonacci được định nghĩa đệ qui như sau

//F(1) = 1, F(2) =1;
//F(n) = F(n-1)+F(n-2), n ≥ 2.
// de quy
#include <iostream>
using namespace std;
int dayso(int n) {
    if(n<=2)
        return 1;
    else 
        return dayso(n-1)+dayso(n-2);
}
int main() {
    cout<<dayso(6);
}   