#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A[10]= {10,2,7,8,4,5,1,6,9}, x;

    for ( const auto &x : A){
        cout << x << " ";
    };
    sort(A, A + 10);
    cout << "\nAfter sorting (Ascending): \n";
    for (const auto &x : A){
        cout << x << " " ;
    };
}